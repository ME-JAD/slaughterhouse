//
// Created by jeana on 29/05/2024.
//
#include <string.h>
#include "typeanimal.h"

#ifndef SLAUGHTERHOUSE_UNICORN_H
#define SLAUGHTERHOUSE_UNICORN_H

typedef struct Rainbow {
    char colors[7][NAME_MAX_SIZE];
} Rainbow;

typedef struct Unicorn {
    unsigned int maneLength;
    unsigned short hornsNumber;
    Rainbow *rainbow;
} Unicorn;

Unicorn *createRealUnicorn(unsigned int maneLength,
                           unsigned short hornsNumber,
                           Rainbow *rainbow);

Rainbow *getDefaultRainbow();

char *getScreamUnicorn(Unicorn *unicorn);

#endif //SLAUGHTERHOUSE_UNICORN_H
