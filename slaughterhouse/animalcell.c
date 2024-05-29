//
// Created by jeana on 29/05/2024.
//

#include "animalcell.h"

AnimalCell *createAnimalCell(Animal *animal) {
    AnimalCell *newAnimalCell = (AnimalCell *) malloc(sizeof(AnimalCell));
    newAnimalCell->animal = animal;
    newAnimalCell->next = NULL;
    return newAnimalCell;
}

void addAnimalCell(AnimalCell *animalCell, Animal *animal) {
    AnimalCell *newAnimalCell = createAnimalCell(animal);
    if (animalCell->next == NULL) {
        animalCell->next = newAnimalCell;
    } else {
        addAnimalCell(animalCell->next, animal);
    }
}

int countAnimalCell(AnimalCell *animalCell) {
    if (animalCell->next == NULL) {
        return 1;
    } else {
        return 1 + countAnimalCell(animalCell->next);
    }
}