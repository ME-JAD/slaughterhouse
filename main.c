#include <stdio.h>
#include "animal/pig.h"
#include "animal/typeanimal.h"
#include "animal/animal.h"

int main(void) {
    Animal *barnabe = createPig("Barnabé",
                                10,
                                2020,
                                "rose");
    displayAnimal(barnabe);
    growAnimal(barnabe);
    displayAnimal(barnabe);
    printf("%s\n", getScreamAnimal(barnabe));
    return 0;
}
