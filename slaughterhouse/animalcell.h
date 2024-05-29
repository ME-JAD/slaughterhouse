//
// Created by jeana on 29/05/2024.
//
#include <stdlib.h>
#include "../animal/animal.h"

#ifndef SLAUGHTERHOUSE_ANIMALCELL_H
#define SLAUGHTERHOUSE_ANIMALCELL_H

typedef struct AnimalCell {
    Animal *animal;
    struct AnimalCell *next;
} AnimalCell;

AnimalCell *createAnimalCell(Animal *animal);

void addAnimalCell(AnimalCell *animalCell, Animal *animal);

int countAnimalCell(AnimalCell *animalCell);

#endif //SLAUGHTERHOUSE_ANIMALCELL_H
