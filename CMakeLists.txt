cmake_minimum_required(VERSION 3.0.0)
project(CI-test)
add_executable(CI-test main.c)
target_compile_options(CI-test PRIVATE -Wall -Wextra -pedantic)
