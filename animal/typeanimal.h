//
// Created by jeana on 29/05/2024.
//

#ifndef SLAUGHTERHOUSE_TYPEANIMAL_H
#define SLAUGHTERHOUSE_TYPEANIMAL_H

#define NAME_MAX_SIZE 10

typedef enum TypeAnimal {
    PIG,
    HORSE,
    UNICORN,
    OSTRICH,
    PLATYPUS
} TypeAnimal;

char *getTypeAnimalName(TypeAnimal typeAnimal);

#endif //SLAUGHTERHOUSE_TYPEANIMAL_H
