//
// Created by Mario Youssef on 2018-08-21.
//

#ifndef YABSJAVATEST_ANIMAL_H
#define YABSJAVATEST_ANIMAL_H

typedef struct Animal {
	char name[50];
	int age;
	int energy;

	void (*eatfunc)(AnimalT);
	void (*poopfunc)(AnimalT);
	int (*getTTLfunc)(int, int);
	void (*sleepfunc)(AnimalT);
	int (*energyfunc)(AnimalT);
	char * (*namefunc)(AnimalT);
	int (*agefunc)(AnimalT);
} AnimalT;

/*static void eat(AnimalT *animal);
static void poop(AnimalT *animal);
static int getTTL(int age, int energy);
static void sleep(AnimalT *animal);
static int getEnergy(AnimalT *animal);
static int getAge(AnimalT *animal);
static char * getName(AnimalT *animal);
*/

#endif //YABSJAVATEST_ANIMAL_H
