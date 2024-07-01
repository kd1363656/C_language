#include <stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int crt;

	srand(time(0));

	rand();

	crt = rand() % 100 + 1;

	if (crt <= 30) {

		printf("30%の確率で会心の一撃\n", crt);

	}
	else {

		printf("ミス！！\n");

	}

}