cmake_minimum_required(VERSION 3.28)
project(slaughterhouse C)

set(CMAKE_C_STANDARD 11)

add_executable(slaughterhouse main.c
        animal/pig.c
        animal/pig.h
        animal/typeanimal.c
        animal/typeanimal.h
        animal/animal.c
        animal/animal.h
        animal/horse.c
        animal/horse.h
        animal/unicorn.c
        animal/unicorn.h
        animal/platypus.c
        animal/platypus.h
        animal/ostrich.c
        animal/ostrich.h
)
