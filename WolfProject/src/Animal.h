//
// Created by Mario Youssef on 2018-08-21.
//

#ifndef YABSJAVATEST_ANIMAL_H
#define YABSJAVATEST_ANIMAL_H

typedef struct Animal {
	char name[50];
	int age;
	int energy;

	void (*eatfunc)(struct Animal*);
	void (*poopfunc)(struct Animal*);
	int (*getTTLfunc)(int, int);
	void (*sleepfunc)(struct Animal*);
	int (*energyfunc)(struct Animal*);
	char * (*namefunc)(struct Animal*);
	int (*agefunc)(struct Animal*);
} AnimalT;

void eat(AnimalT *animal);
void poop(AnimalT *animal);
int getTTL(int age, int energy);
void sleep(AnimalT *animal);
int getEnergy(AnimalT *animal);
int getAge(AnimalT *animal);
char * getName(AnimalT *animal);


#endif //YABSJAVATEST_ANIMAL_H
