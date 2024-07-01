#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {

	int data[30] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30 };

	int i,w,rdm;

	srand(time(0));

	for (i = 0; i < 30; i++) {

		rand();

		rdm = rand() % 30;

		w = data[i];

		data[i] = data[rdm];

		data[rdm] = w;

	}

	for (i = 0; i < 30; i++) {

		printf("%d ", data[i]);

	}

















}