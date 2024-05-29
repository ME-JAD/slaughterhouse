#include <stdio.h>
#include "animal/pig.h"
#include "animal/typeanimal.h"
#include "animal/animal.h"
#include "slaughterhouse/slaughterhouse.h"

int main(void) {
    Slaughterhouse *steakHouse = createSlaughterhouse();
    addAnimalSlaughterhouse(steakHouse, createPig("Barnabé",
                                                  10,
                                                  2020,
                                                  "rose"));
    addAnimalSlaughterhouse(steakHouse, createUnicorn("Courtney",
                                                      100,
                                                      2010,
                                                      10,
                                                      2,
                                                      getDefaultRainbow()));
    addAnimalSlaughterhouse(steakHouse, createUnicorn("Britney",
                                                      100,
                                                      2010,
                                                      10,
                                                      2,
                                                      getDefaultRainbow()));
    addAnimalSlaughterhouse(steakHouse, createPlatypus("Brandon",
                                                       5,
                                                       2022,
                                                       20,
                                                       2));
    printf("Nombre d'animaux dans l'abattoir: %d\n", countAnimalSlaughterhouse(steakHouse));
    slaughterAllAnimalsInSlaughterhouse(steakHouse);
    return 0;
}
