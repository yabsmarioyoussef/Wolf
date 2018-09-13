
///
// Created by Mario Youssef on 2018-08-21.
//
#include "Animal.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <memory.h>
#include "Wolf.h"

void eat(AnimalT *animal){
	printf("EErgy before eat %d \n", animal->energy);
	((WolfT*) animal)->ani->energy += 25;
	printf("EErgy after eat %d \n", animal->energy);
}

void poop(AnimalT *animal) {
	animal->energy += (-10);
}

void hunt(WolfT* wolf) {
    int effort = -25;

    int r = rand();
    if(r % 2 == 0) {
        effort +=15;
    }
    wolf->ani->energy += effort;
}

static int calculateTTL(int age, int energy) {
    return ((2 * energy) / age);
}

int getTTL(int age, int energy) {
    int ttl = calculateTTL(age, energy);
    return ttl;
}

void sleep(AnimalT *animal) {
	animal->energy += 15;
}

char * getName(AnimalT *animal) {
	return animal->name;
}

int getEnergy(AnimalT *animal) {
	return animal->energy;
}

int getAge(AnimalT *animal) {
	return  animal->age;
}

void init(WolfT *wolf, char *name, int age) {
	wolf->ani = (AnimalT *)malloc(sizeof(AnimalT));
	strcpy(wolf->ani->name, name);
	wolf->ani->age = age;
	wolf->ani->energy = 20;
	wolf->ani->eatfunc = &eat;
	wolf->ani->poopfunc = &poop;
	wolf->huntfunc = &hunt;
	wolf->ani->getTTLfunc = &getTTL;
	wolf->ani->sleepfunc = &sleep;
	wolf->ani->namefunc = &getName;
	wolf->ani->energyfunc = &getEnergy;
	wolf->ani->agefunc = &getAge;
}


