#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {

	int ram,i;

	srand(time(0));


	for (i = 0; i < 100; i++) {

		rand();

		ram = rand() % 300 + 1;

		printf("%3d ", ram);

	}

}