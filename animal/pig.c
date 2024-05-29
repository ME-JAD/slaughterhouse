//
// Created by jeana on 29/05/2024.
//

#include "pig.h"

#define PIG_SCREAM "Grouik grouik !!!"

Pig *createRealPig(const char color[NAME_MAX_SIZE]) {
    Pig *newPig = (Pig *) malloc(sizeof(Pig));
    strcpy_s(newPig->color, NAME_MAX_SIZE, color);
    return newPig;
}

char *getScreamPig(Pig *pig) {
    return PIG_SCREAM;
}
