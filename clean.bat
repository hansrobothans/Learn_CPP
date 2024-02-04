@echo off

for /r %%i in (*.exe) do (
    del "%%i"
    echo Deleted: %%i
)

echo Deletion complete.
