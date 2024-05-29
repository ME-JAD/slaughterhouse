#include <stdio.h>
#include "animal/pig.h"
#include "animal/typeanimal.h"
#include "animal/animal.h"

int main(void) {
    Animal *barnabe = createPig("Barnabé",
                                10,
                                2020,
                                "rose");
    Animal *courtney = createUnicorn("Courtney",
                                     100,
                                     2010,
                                     10,
                                     2,
                                     getDefaultRainbow());
    displayAnimal(barnabe);
    displayAnimal(courtney);
    growAnimal(barnabe);
    growAnimal(courtney);
    displayAnimal(barnabe);
    displayAnimal(courtney);
    printf("%s\n", getScreamAnimal(barnabe));
    printf("%s\n", getScreamAnimal(courtney));
    return 0;
}
