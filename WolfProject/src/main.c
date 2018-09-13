// Created by Mario Youssef on 2018-08-21.
//

#include "Animal.h"
#include <stdio.h>
#include <string.h>
#include "Wolf.h"

int main(void) {

	WolfT *w = malloc(sizeof(*w));
	
	init(w, "Mario", 23);

    printf("wolf has %d energy \n", w->ani->energyfunc(w->ani));
    w->ani->eatfunc(w->ani);
    printf("Wolf eats and now have %d energy \n", w->ani->energyfunc(w->ani));
    w->ani->poopfunc(w->ani);
    w->ani->sleepfunc(w->ani);
    w->ani->sleepfunc(w->ani);

    int age = w->ani->agefunc(w->ani);
    int energy = w->ani->energyfunc(w->ani);
    printf("Wolf have now 40 och 55 energy depending on the hunt, Answer: %d \n", w->ani->energyfunc(w->ani));
    printf("wolfs time to live is %d years \n", w->ani->getTTLfunc(age, energy));

}

