@echo off & setlocal enabledelayedexpansion
set/p number=
copy Build.cpp P%number%.cpp > nul
start P%number%.cpp
