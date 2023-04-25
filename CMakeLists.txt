
cmake_minimum_required(VERSION 3.7.2)
project(libsel4vbtallocman C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu99")

file(GLOB deps src/*.c)
list(SORT deps)

add_library(sel4vbtallocman STATIC EXCLUDE_FROM_ALL ${deps})
target_include_directories(sel4vbtallocman PUBLIC include)
target_link_libraries(
    sel4vbtallocman
    PUBLIC
        muslc
        sel4
        utils
        sel4vka
        sel4_autoconf
)