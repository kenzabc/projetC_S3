cmake_minimum_required(VERSION 3.25)
project(projetC_S3 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(projetC_S3
        main.c
        set.c
        set.h list.h list.c cell.h cell.c)
