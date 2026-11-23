cmake_minimum_required(VERSION 3.16)
project(ai-subtitle-gen CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(aisubtitlegen
    src/main.cpp
    src/transcribe.cpp
    src/translate.cpp
    src/formats.cpp
)

target_include_directories(aisubtitlegen PRIVATE include)

if(WIN32)
    target_link_libraries(aisubtitlegen PRIVATE userenv)
endif()
