//
// Created by jeana on 29/05/2024.
//

#include <string.h>
#include "typeanimal.h"

#ifndef SLAUGHTERHOUSE_PLATYPUS_H
#define SLAUGHTERHOUSE_PLATYPUS_H

typedef struct Platypus {
    unsigned int tailLength;
    unsigned int eggWeight;
} Platypus;

Platypus *createRealPlatypus(unsigned int tailLength, unsigned int eggWeight);

char *getScreamOstrich(Platypus *platypus);

#endif //SLAUGHTERHOUSE_PLATYPUS_H
