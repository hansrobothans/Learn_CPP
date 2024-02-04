@echo off
setlocal enabledelayedexpansion

for /d /r %%i in (*build*, *bin*, *.exe) do (
    rd /s /q "%%i"
)
echo Delete bin Done!
pause