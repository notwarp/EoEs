add_subdirectory(object)
add_subdirectory(event)
add_library(types types.c)
target_link_libraries(types object event)