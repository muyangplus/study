@echo off & setlocal enabledelayedexpansion
set/p number=
if not exist P%number%.cpp (copy Build.cpp P%number%.cpp)
start P%number%.cpp
