@echo off
chcp 65001
setlocal enabledelayedexpansion

for /d /r %%i in (*build*, *bin*) do (
    rd /s /q "%%i"
    echo Deleted: %%i
)

for /r %%i in (*.exe) do (
    del "%%i"
    echo Deleted: %%i
)
echo Delete bin Done!
@REM pause