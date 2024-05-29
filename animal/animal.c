//
// Created by jeana on 29/05/2024.
//

#include "animal.h"
#include "pig.h"

Animal *createAnimal(const char name[NAME_MAX_SIZE],
                     unsigned int weight,
                     unsigned int birthDate,
                     TypeAnimal typeAnimal,
                     void *realAnimal);


Animal *createPig(const char name[NAME_MAX_SIZE],
                  unsigned int weight,
                  unsigned int birthDate,
                  const char color[NAME_MAX_SIZE]) {
    return createAnimal(name,
                        weight,
                        birthDate,
                        PIG,
                        createRealPig(color));
}

Animal *createAnimal(const char name[NAME_MAX_SIZE],
                     unsigned int weight,
                     unsigned int birthDate,
                     TypeAnimal typeAnimal,
                     void *realAnimal) {
    Animal *newAnimal = (Animal *) malloc(sizeof(Animal));
    strcpy_s(newAnimal->name, NAME_MAX_SIZE, name);
    newAnimal->weight = weight;
    newAnimal->birthDate = birthDate;
    newAnimal->typeAnimal = typeAnimal;
    newAnimal->realAnimal = realAnimal;
    return newAnimal;
}

void dieAnimal(Animal *animal) {

}

void growAnimal(Animal *animal) {
    animal->weight += (unsigned int) (animal->weight * 0.1);
}

void displayAnimal(Animal *animal) {
    printf("Nom: %s\n", animal->name);
    printf("Poids: %d\n", animal->weight);
    printf("Date de naissance: %d\n", animal->birthDate);
    printf("Type: %s\n", getTypeAnimalName(animal->typeAnimal));
}

char *getScreamAnimal(Animal *animal) {
    switch (animal->typeAnimal) {
        case PIG:
            return getScreamPig((Pig *) animal->realAnimal);
    }
}