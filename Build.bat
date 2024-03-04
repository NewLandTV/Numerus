@echo off
call mkdir Build
call cd Build
start /wait /b cmake ..
start /wait /b cmake --build ./
call move /y ".\Sources\Debug\Numerus.exe" ..
call cd ..
call rmdir /s /q Build