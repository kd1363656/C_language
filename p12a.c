#include <stdio.h>
main()
{
	int a[] = { 3,5,7,9,11,13,15,17,19,21 },*p_a;
	int b[] = { 4,8,12,16,20,24,28,32,38,42 },*p_b,i;

	p_a = a;
	p_b = b;

	printf("---���s�O---\n");

	for (i = 0; i < 10; i++) {

		printf("%d ", *p_a++);


	}

	printf("\n");

	for (i = 0; i < 10; i++) {

		printf("%d ", *p_b++);

	}

	printf("\n---���s��---\n");

	p_b = b;

	for (i = 0; i < 10; i++) {

		p_a--;
		p_b = p_a;
		printf("%d ", *p_b++);
	}


}