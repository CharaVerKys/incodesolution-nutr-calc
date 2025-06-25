cmake_minimum_required(VERSION 3.11)

project(kek LANGUAGES CXX)

include_directories("src")

set(sources_var 
src/main.cpp

)

add_executable(diet.elf ${sources_var})