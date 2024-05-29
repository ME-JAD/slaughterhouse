//
// Created by jeana on 29/05/2024.
//
#include <string.h>
#include "typeanimal.h"

#ifndef SLAUGHTERHOUSE_OSTRICH_H
#define SLAUGHTERHOUSE_OSTRICH_H

typedef struct Ostrich {
    unsigned int neckLength;
    unsigned int eggWeight;
} Ostrich;

Ostrich *createRealOstrich(unsigned int maneLength, unsigned int eggWeight);

char *getScreamOstrich(Ostrich *ostrich);

#endif //SLAUGHTERHOUSE_OSTRICH_H
