#include <stdio.h>
main()
{
	int a[] = { 3,5,7,9,11,13,15,17,19,21 },*p_a;
	int b[] = { 4,8,12,16,20,24,28,32,38,42 },*p_b;
	int i,wrk;

	p_a = a;
	p_b = b;

	printf("ーーー実行前ーーー\n");

	printf("配列a[ ] =");

	for (i = 0; i < 10; i++) {

		printf("%d ", *p_a++);

	}

	printf("\n配列b[ ] =");

	for (i = 0; i < 10; i++) {

		printf("%d ", *p_b++);

	}

	printf("\nーーー実行後ーーー\n");

	p_a = a;
	p_b = b;

	printf("配列a[ ] =");

	for (i = 0; i < 10; i++) {

		wrk = *p_a;
		*p_a = *p_b;
		*p_b = wrk;

		printf("%d ", *p_a++);
		p_b++;


	}

	p_b = b;

	printf("\n配列b[ ] =");

	for (i = 0; i < 10; i++) {

		printf("%d ", *p_b++);

	}

}