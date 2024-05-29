//
// Created by jeana on 29/05/2024.
//
#include <stdlib.h>
#include <stdio.h>
#include "../animal/animal.h"
#include "animalcell.h"

#ifndef SLAUGHTERHOUSE_SLAUGHTERHOUSE_H
#define SLAUGHTERHOUSE_SLAUGHTERHOUSE_H
typedef struct Slaughterhouse {
    AnimalCell *LLCAnimal;
} Slaughterhouse;

Slaughterhouse *createSlaughterhouse();

void addAnimalSlaughterhouse(Slaughterhouse *slaughterhouse, Animal *animal);

int countAnimalSlaughterhouse(Slaughterhouse *slaughterhouse);

void slaughterAllAnimalsInSlaughterhouse(Slaughterhouse *slaughterhouse);

#endif //SLAUGHTERHOUSE_SLAUGHTERHOUSE_H
