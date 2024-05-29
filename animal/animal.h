//
// Created by jeana on 29/05/2024.
//
#include "typeanimal.h"
#include "pig.h"
#include "unicorn.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef SLAUGHTERHOUSE_ANIMAL_H
#define SLAUGHTERHOUSE_ANIMAL_H

typedef struct Animal {
    char name[NAME_MAX_SIZE];
    unsigned int weight;
    unsigned int birthDate;
    TypeAnimal typeAnimal;
    void *realAnimal;
} Animal;


Animal *createPig(const char name[NAME_MAX_SIZE],
                  unsigned int weight,
                  unsigned int birthDate,
                  const char color[NAME_MAX_SIZE]);

Animal *createUnicorn(const char name[NAME_MAX_SIZE],
                      unsigned int weight,
                      unsigned int birthDate,
                      unsigned int hornLength,
                      unsigned int hornNumber,
                      Rainbow *rainbow);

void dieAnimal(Animal *animal);

void growAnimal(Animal *animal);

void displayAnimal(Animal *animal);

char *getScreamAnimal(Animal *animal);

#endif //SLAUGHTERHOUSE_ANIMAL_H
