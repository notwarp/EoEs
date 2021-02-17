add_subdirectory(types)
add_subdirectory(console)
add_library(core core.c)
target_link_libraries(core types console)