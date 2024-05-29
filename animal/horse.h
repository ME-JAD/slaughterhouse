//
// Created by jeana on 29/05/2024.
//

#include <string.h>
#include "typeanimal.h"

#ifndef SLAUGHTERHOUSE_HORSE_H
#define SLAUGHTERHOUSE_HORSE_H

typedef struct Horse {
    unsigned int maneLength;
} Horse;

Horse *createRealHorse(unsigned int maneLength);

char *getScreamHorse(Horse *horse);

#endif //SLAUGHTERHOUSE_HORSE_H
