cmake_minimum_required(VERSION 3.0)
project(COMiC-Mojang-server-GUI C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(modules/types)
add_subdirectory(modules/os)
add_subdirectory(modules/os-gui)
add_subdirectory(modules/env)
add_subdirectory(modules/logger)
#add_subdirectory(modules/engine)

add_executable(
        COMiC
        src/main.c
)

target_link_libraries(
        COMiC
        PRIVATE

        COMiC::types
        COMiC::os
        #COMiC::os-gui
        COMiC::env
        #COMiC::logger
        #COMiC::engine
)

install(
        TARGETS COMiC
        RUNTIME DESTINATION ./
)