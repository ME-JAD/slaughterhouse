//
// Created by jeana on 29/05/2024.
//

#include "typeanimal.h"

char* getTypeAnimalName(TypeAnimal typeAnimal) {
    switch (typeAnimal) {
        case PIG:
            return "Cochon";
        case HORSE:
            return "Cheval";
        case UNICORN:
            return "Licorne";
        case OSTRICH:
            return "Autruche";
        case PLATYPUS:
            return "Ornithorynque";
    }
}
