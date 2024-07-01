#include <stdio.h>
main()
{
	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},
        {16,17,18,19,20},{21,22,23,24,25} }, i, j,k;

	int c[5][5];
	
	int* p_a, * p_c;
	
	p_a = a[0];
	p_c = c[0];

	for (i = 0; i < 25; i++) {

		p_a++;

	}

	*p_a--;

	printf("”z—ñ c \n");

	for (k = 0; k < 5; k++) {

		for (i = 0; i < 5; i++) {


			*p_c = *p_a;
			printf("%4d ",*p_c);
			p_a--;
			p_c++;

		}
		printf("\n");
	}

}