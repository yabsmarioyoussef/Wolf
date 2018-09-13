///
// Created by Mario Youssef on 2018-08-21.
//
#include "Animal.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <memory.h>

typedef struct Wolf {
	AnimalT *animal;
	int (*huntfunc)();
} WolfT;

int eat(char *foodType){
    if(strcmp(foodType, "fish") == 0) {
		printf("we will gain %d energy \n", 25);
        return 25;
    }
    else if(strcmp(foodType, "sheep") == 0) {
		printf("we will gain %d energy \n", 35);
        return 35;
    }
    else if(strcmp(foodType, "human") == 0) {
		printf("we will gain %d energy \n", 55);
        return 50;
    }
    else {
		printf("we will gain %d energy \n", 10);
        return 10;
    }
}

int poop() {
    return -10;
}

int hunt() {
    int effort = -25;

    int r = rand();
    if(r % 2 == 0) {
        effort +=15;
    }
    return effort;
}

static int calculateTTL(int age, int energy) {
    return ((2 * energy) / age);
}

int getTTL(int age, int energy) {
    int ttl = calculateTTL(age, energy);
    return ttl;
}

int sleep() {
    return 15;
}

init(WolfT* wolf) {
	wolf->animal->eatfunc = &eat;
	wolf->animal->poopfunc = &poop;
	wolf->huntfunc = &hunt;
	wolf->animal->getTTLfunc = &getTTL;
	wolf->animal->sleepfunc = &sleep;
}
