cmake_minimum_required(VERSION 3.9)
project(system C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address")

add_executable(bubble_sort bubble_sort.c)
add_executable(quick_sort quick_sort.c)
add_executable(merge_sort merge_sort.c)
add_executable(liner_search liner_search.c)
add_executable(binrary_search binrary_search.c)
add_executable(link_list link_list.c)
