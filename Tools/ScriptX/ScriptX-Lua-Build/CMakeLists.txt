﻿cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SCRIPTX_BACKEND Lua)

project ("ScriptX-Build")

include_directories(../include/Lua)
include(../ScriptX/CMakeLists.txt)
