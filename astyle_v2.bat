@echo on

"D:\program files\AStyle\bin\AStyle.exe" .\/*.c   --style=allman --indent=spaces=4 --indent-preproc-block --pad-oper --pad-header --unpad-paren --suffix=none --align-pointer=name --lineend=linux --convert-tabs --verbose -r
"D:\program files\AStyle\bin\AStyle.exe" .\/*.h   --style=allman --indent=spaces=4 --indent-preproc-block --pad-oper --pad-header --unpad-paren --suffix=none --align-pointer=name --lineend=linux --convert-tabs --verbose -r
"D:\program files\AStyle\bin\AStyle.exe" .\/*.cpp --style=allman --indent=spaces=4 --indent-preproc-block --pad-oper --pad-header --unpad-paren --suffix=none --align-pointer=name --lineend=linux --convert-tabs --verbose -r

::--style=allman
::--indent=spaces=4
::--indent-preproc-block
::--pad-oper
::--pad-header
::--unpad-paren
::--suffix=none
::--align-pointer=name
::--lineend=linux
::--convert-tabs
::--verbose

pause
