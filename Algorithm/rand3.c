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

		printf("30%�̊m���ŉ�S�̈ꌂ\n", crt);

	}
	else {

		printf("�~�X�I�I\n");

	}

}