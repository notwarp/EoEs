cmake_minimum_required(VERSION 3.17)
project(EoEs C)

set(CMAKE_C_STANDARD 11)
if(CMAKE_BUILD_TYPE MATCHES Debug)
    add_compile_definitions(DEBUG)
endif()

add_subdirectory(core)
add_executable(EoEs EoEs.c)
target_link_libraries(EoEs PUBLIC core)
target_link_libraries(EoEs ${CMAKE_C_FLAGS})
