set UE5PATH=D:\prog\Epic Games\UE5\UE_5.4
set MODNAME=DebugMenu
set GAMEPATH=D:\prog\steam\steamapps\common\ENDER MAGNOLIA\EnderMagnolia
set PROJPATH=%~dp0
set PROJPATH=%PROJPATH:~0,-1%
for %%I in (.) do set PROJNAME=%%~nxI

call "%UE5PATH%\Engine\Build\BatchFiles\RunUAT.bat" BuildCookRun^
 -nocompileeditor -SkipCookingEditorContent -installed -nop4^
 -project="%PROJPATH%\%PROJNAME%.uproject"^
 -stagingdirectory="%PROJPATH%\Saved\StagedBuilds"^
 -prereqs -nodebuginfo -manifests -targetplatform=Win64 -clientconfig=Development -utf8output -iostore^
 -cook -stage -pak -package^
 -ddc=InstalledDerivedDataBackendGraph

if exist "%PROJPATH%\%MODNAME%\" RD /S /Q "%PROJPATH%\%MODNAME%"
MKDIR "%PROJPATH%\%MODNAME%"
XCOPY "%PROJPATH%\Saved\StagedBuilds\Windows\%PROJNAME%\Content\Paks\*chunk1*" "%PROJPATH%\%MODNAME%\."
For /R "%PROJPATH%\%MODNAME%\" %%# in ("*.*") Do (
  ren "%%#" "%MODNAME%_0_P%%~x#"
)
if exist "%GAMEPATH%\Content\Paks\%MODNAME%\" RD /S /Q "%GAMEPATH%\Content\Paks\%MODNAME%%"
XCOPY /Y /C /I /E "%PROJPATH%\%MODNAME%" "%GAMEPATH%\Content\Paks\%MODNAME%"

pause