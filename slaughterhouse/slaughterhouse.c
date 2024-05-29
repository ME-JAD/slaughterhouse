//
// Created by jeana on 29/05/2024.
//

#include "slaughterhouse.h"

Slaughterhouse *createSlaughterhouse() {
    Slaughterhouse *newSlaughterhouse = (Slaughterhouse *) malloc(sizeof(Slaughterhouse));
    newSlaughterhouse->LLCAnimal = NULL;
    return newSlaughterhouse;
}

void addAnimalSlaughterhouse(Slaughterhouse *slaughterhouse, Animal *animal) {
    if (slaughterhouse->LLCAnimal == NULL) {
        slaughterhouse->LLCAnimal = createAnimalCell(animal);
    } else {
        addAnimalCell(slaughterhouse->LLCAnimal, animal);
    }
}

int countAnimalSlaughterhouse(Slaughterhouse *slaughterhouse) {
    if (slaughterhouse->LLCAnimal == NULL) {
        return 0;
    } else {
        return countAnimalCell(slaughterhouse->LLCAnimal);
    }
}

void slaughterAllAnimalsInSlaughterhouse(Slaughterhouse *slaughterhouse) {
    if (slaughterhouse->LLCAnimal != NULL) {
        AnimalCell *current = slaughterhouse->LLCAnimal;
        while (current != NULL) {
            dieAnimal(current->animal);
            current = current->next;
        }
    }
}