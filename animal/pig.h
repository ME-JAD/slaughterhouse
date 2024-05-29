//
// Created by jeana on 29/05/2024.
//
#include <stdlib.h>
#include <string.h>
#include "typeanimal.h"

#ifndef SLAUGHTERHOUSE_PIG_H
#define SLAUGHTERHOUSE_PIG_H


typedef struct Pig {
    char color[NAME_MAX_SIZE];
} Pig;

Pig *createRealPig(const char color[NAME_MAX_SIZE]);

char *getScreamPig(Pig *pig);

#endif //SLAUGHTERHOUSE_PIG_H
