# EnderMagnolia.ModdingTemplate & DebugMenuInvoker
Modding template for EnderMagnolia

To invoke debug menu, download release and extract EnderMagnolia to the game folder(same name, you will see EnderMagnolia.exe), F2 to invoke debug menu, you can change keybind in lua script

Alternatively, you can build this project, after package mod, you need to install ue4ss, make a lua script and enable it:

```
local DebugMenu = nil

local function ShowDebugMenu()
	if DebugMenu == nil or not DebugMenu:IsValid() then
		local SPIcons = FindAllOf("WBP_SPIcon_C")
		for _,SPIcon in pairs(SPIcons or {}) do
        	if SPIcon:IsValid() and SPIcon:GetFullName():byte(15)==69 then
        		print("found SPIcon")
            	SPIcon:DebugInvoke()
    			DebugMenu = SPIcon.DebugMenu
    			print("got DebugMenu")
            	return
        	end
    	end
    end
    if DebugMenu and DebugMenu:IsValid() then
    	DebugMenu:AddToViewPort(0)
    end
end

RegisterKeyBind(Key.F2, ShowDebugMenu)
```