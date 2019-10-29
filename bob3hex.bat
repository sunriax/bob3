@echo off

echo.
echo  SUNriaX Technology!
echo.
echo  HEX2BOB3 (BOB3 File generator for Atmel Studio)
echo  Version 2.0
echo.
echo  github.com/sunriax
echo.

IF "%1%"=="" goto fault
IF "%2%"=="" goto fault

echo.
echo  Solution Directory
echo  --------------------
echo  %1
echo.
echo  Target Directory
echo  --------------------
echo  %2
echo.

type %1bob3.top.config > %2.bob3
type %2.hex >> %2.bob3
type %1bob3.bot.config >> %2.bob3

echo.
echo  Executing Programmer
echo  --------------------
echo.

start "" "C:\Program Files\BobDude\bin\bobdude\bobdude.exe" "%2.bob3"

goto quit

:fault
echo.
echo  Parameter missing...
echo  Exit
echo.

EXIT 1

:quit
EXIT 0
