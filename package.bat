set UE5PATH=D:\prog\Epic Games\UE5\UE_5.3
set MODNAME=DebugMenu

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

pause