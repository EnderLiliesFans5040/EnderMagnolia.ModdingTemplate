# EnderMagnolia.ModdingTemplate & DebugMenuInvoker
Modding template for EnderMagnolia, just delete the content folder if you don't want debug menu

To invoke debug menu, download release and extract EnderMagnolia to the game folder(same name, you will see EnderMagnolia.exe), F2 to invoke debug menu, you can change keybind in lua script

Features:

RegisterKeyBind(Key.F2, ToggleDebugMenu)

RegisterKeyBind(Key.F3, ToggleInvincible)

RegisterKeyBind(Key.F4, ToggleFlyMode)

RegisterKeyBind(Key.F5, ToggleCustomSpeed)

RegisterKeyBind(Key.F6, ToggleCustomGravity)

RegisterKeyBind(Key.F7, TogglePhysicsInfo)

RegisterKeyBind(Key.F8, FullyRestore)

RegisterKeyBind(Key.F9, SetCustomGameSpeed)

RegisterKeyBind(Key.F10, ToggleGravity)

Alternatively, you can build this project, after package mod, you need to install ue4ss, make a lua script and enable it:

```
-- configs here
local CustomSpeed = 4000
local CustomGravity = 1
local CustomGameSpeed = 0.05
--

local DebugMenu = nil
local Lilac = nil
local DebugWidget = nil
local ObjectCache = {}

local function GetStaticObject(ObjectName)
	local CachedObject = ObjectCache[ObjectName]
	if CachedObject == nil or not CachedObject:IsValid() then
		CachedObject = StaticFindObject(ObjectName)
		ObjectCache[ObjectName] = CachedObject
	end
	return CachedObject
end

local function GetLilac()
	if Lilac == nil or not Lilac:IsValid() then
		Lilac = FindFirstOf("BP_p0000_Lilac_C")
	end
	return Lilac
end

local function GetGameplayStatics()
	return GetStaticObject("/Script/Engine.Default__GameplayStatics")
end

local function GetWidgetBlueprintLibrary()
	return GetStaticObject("/Script/UMG.Default__WidgetBlueprintLibrary")
end

function AddState(StateName)
  local state = GetStaticObject(StateName)
  if state:IsValid() then
    GetLilac().StateComponent:AddState(state)
  else 
    print("state not available")
  end
end

function RemoveState(StateName)
  local state = GetStaticObject(StateName)
  if state:IsValid() then
    GetLilac().StateComponent:RemoveState(state)
  else 
    print("state not available")
  end
end

function TryInvokeDebug()
	local SPIcons = FindAllOf("WBP_SPIcon_C")
	for _,SPIcon in pairs(SPIcons or {}) do
    if SPIcon:IsValid() and SPIcon:GetFullName():byte(15)==69 then
      SPIcon:DebugInvoke()
      DebugWidget = SPIcon.DebugWidget
      return
    end
  end
end

local bShowDebugMenu = false
local function ToggleDebugMenu()
	bShowDebugMenu = not bShowDebugMenu

	if DebugMenu == nil or not DebugMenu:IsValid() then
		TryInvokeDebug()
    DebugMenu = DebugWidget.DebugMenu
    DebugMenu:AddToViewPort(0)
    return
  end
  if not DebugMenu:IsInViewport() then
    bShowDebugMenu = true
    DebugMenu:AddToViewPort(0)
    DebugMenu:SetVisibility(0)
    return
  end

  if bShowDebugMenu then
    GetGameplayStatics():SetGamePaused(GetLilac(), true)
    DebugMenu:SetFocus()
    DebugMenu:SetKeyboardFocus()
    DebugMenu:SetVisibility(0)
  else
    GetGameplayStatics():SetGamePaused(GetLilac(), false)
    GetWidgetBlueprintLibrary():SetFocusToGameViewport()
    DebugMenu:SetVisibility(1)
  end
end

local bInvincible = false
function ToggleInvincible()
	bInvincible = not bInvincible
	if bInvincible then 
		--StatBurnComponent:SetIsImmune(true)
		--StatFreezeComponent:SetIsImmune(true)
		--StatShockComponent:SetIsImmune(true)
		AddState("/Script/Zion.StateInvincible")
	else
		RemoveState("/Script/Zion.StateInvincible")
		--StatBurnComponent:SetIsImmune(false)
		--StatFreezeComponent:SetIsImmune(false)
		--StatShockComponent:SetIsImmune(false)
	end
end

local NoGravity = false
function ToggleGravity()
	NoGravity = not NoGravity
	if NoGravity then
		AddState("/Script/Zion.StateIgnoreGravity")
	else
		RemoveState("/Script/Zion.StateIgnoreGravity")
	end
end

function FullyRestore()
	GetLilac().StatHPComponent:FullyRestore()
	--GetLilac().StatSPComponent:FullyRestore()
	--SP nil here
end

local bFly = false
function ToggleFlyMode()
	bFly = not bFly
	if bFly then
		--ZionCharacterMovementComponent won't work
		GetLilac().CharacterMovement.MovementMode = 5
	else 
		GetLilac().CharacterMovement.MovementMode = 1
	end
end

function ToggleSwimMode()

end

function ForceWalk()
	
end

local bCustomSpeed = false
function ToggleCustomSpeed()
	bCustomSpeed = not bCustomSpeed
	if bCustomSpeed then
		GetLilac().CharacterMovement.MaxWalkSpeed = CustomSpeed
	else 
		GetLilac().CharacterMovement.MaxWalkSpeed = 440
	end
end

local bCustomGravity = false
function ToggleCustomGravity()
	bCustomGravity = not bCustomGravity
	if bCustomGravity then
		GetLilac().CharacterMovement.GravityScale = CustomGravity
	else 
		GetLilac().CharacterMovement.GravityScale = 3.25
	end
end

local bPhysicsInfo = false
function TogglePhysicsInfo()
	bPhysicsInfo = not bPhysicsInfo
	if DebugWidget == nil or not DebugWidget:IsValid() then
		TryInvokeDebug()
		bPhysicsInfo = true
		DebugWidget.Physics = true
	else 
		DebugWidget.Physics = bPhysicsInfo
	end
end

local function SetCustomGameSpeed()
	GetGameplayStatics():SetGlobalTimeDilation(GetLilac(),CustomGameSpeed)
end

RegisterKeyBind(Key.F2, ToggleDebugMenu)
RegisterKeyBind(Key.F3, ToggleInvincible)
RegisterKeyBind(Key.F4, ToggleFlyMode)
RegisterKeyBind(Key.F5, ToggleCustomSpeed)
RegisterKeyBind(Key.F6, ToggleCustomGravity)
RegisterKeyBind(Key.F7, TogglePhysicsInfo)
RegisterKeyBind(Key.F8, FullyRestore)
RegisterKeyBind(Key.F9, SetCustomGameSpeed)
RegisterKeyBind(Key.F10, ToggleGravity)
```