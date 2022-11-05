cmake_minimum_required(VERSION 3.23)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_compile_options(-lm)
add_executable(untitled main.c matriz.c matriz.h fibonacci.c buscaCaminho.c buscaCaminho.h fibonacci.h)
target_link_libraries(untitled m)