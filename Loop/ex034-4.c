#include <stdio.h>
main()
{
	int su, ia, ib = 1, ic;

	printf("���́H ");
	scanf("%d", &su);

	do {

		ic = su - 1;
		ia = 0;

		while (ic >= ib)
		{
			ic--;
			printf(" ");
		}


		do {
			printf("*");
			ia++;
		} while (ib > ia);
		ib++;
		printf("\n");
	} while (su >= ib);
}