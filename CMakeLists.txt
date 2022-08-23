cmake_minimum_required(VERSION 3.24)
project(Module_2)

set(CMAKE_CXX_STANDARD 98)
add_compile_options(-Wall -Wextra -Werror)

add_executable(Module_2_ex00 ex00/main.cpp ex00/Fixed.cpp ex00/Fixed.hpp)
add_executable(Module_2_ex01 ex01/main.cpp ex01/Fixed.cpp ex01/Fixed.hpp)
add_executable(Module_2_ex02 ex02/main.cpp ex02/Fixed.cpp ex02/Fixed.hpp)
