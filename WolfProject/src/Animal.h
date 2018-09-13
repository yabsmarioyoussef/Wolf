//
// Created by Mario Youssef on 2018-08-21.
//

#ifndef YABSJAVATEST_ANIMAL_H
#define YABSJAVATEST_ANIMAL_H

typedef struct Animal {
	char name[50];
	int age;
	int energy;
	int (*eatfunc)(char*);
	int (*poopfunc)();
	int (*getTTLfunc)(int, int);
	int (*sleepfunc)();
} AnimalT;

int eat(char* foodtype);
int poop();
int hunt();
int getTTL(int age, int energy);
int sleep();


#endif //YABSJAVATEST_ANIMAL_H
