//
// Created by jeana on 29/05/2024.
//

#include "platypus.h"

Platypus *createRealPlatypus(unsigned int tailLength, unsigned int eggWeight) {
    Platypus *newPlatypus = (Platypus *) malloc(sizeof(Platypus));
    newPlatypus->tailLength = tailLength;
    newPlatypus->eggWeight = eggWeight;
    return newPlatypus;
}

char *getScreamPlatypus(Platypus *platypus) {
    return "Non pas moi, pitié !!!";
}
