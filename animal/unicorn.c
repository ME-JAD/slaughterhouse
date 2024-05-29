//
// Created by jeana on 29/05/2024.
//

#include "unicorn.h"

Unicorn *createRealUnicorn(unsigned int maneLength,
                           unsigned short hornsNumber,
                           Rainbow *rainbow) {
    Unicorn *newUnicorn = (Unicorn *) malloc(sizeof(Unicorn));
    newUnicorn->maneLength = maneLength;
    newUnicorn->hornsNumber = hornsNumber;
    newUnicorn->rainbow = rainbow;
    return newUnicorn;
}

Rainbow *getDefaultRainbow() {
    Rainbow *rainbow = (Rainbow *) malloc(sizeof(Rainbow));
    strcpy(rainbow->colors[0], "Rouge");
    strcpy(rainbow->colors[1], "Orange");
    strcpy(rainbow->colors[2], "Jaune");
    strcpy(rainbow->colors[3], "Vert");
    strcpy(rainbow->colors[4], "Bleu");
    strcpy(rainbow->colors[5], "Indigo");
    strcpy(rainbow->colors[6], "Violet");
    return rainbow;
}

char *getScreamUnicorn(Unicorn *unicorn) {
    char *scream = (char *) malloc(sizeof(char) * 100);
    sprintf(scream,
            "Je suis une licorne avec une crinière de %d cm, %d cornes et un arc-en-ciel de couleurs %s, %s, %s, %s, %s, %s et %s.",
            unicorn->maneLength,
            unicorn->hornsNumber,
            unicorn->rainbow->colors[0],
            unicorn->rainbow->colors[1],
            unicorn->rainbow->colors[2],
            unicorn->rainbow->colors[3],
            unicorn->rainbow->colors[4],
            unicorn->rainbow->colors[5],
            unicorn->rainbow->colors[6]);
    return scream;
}