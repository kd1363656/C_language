#include <stdio.h>
main()
{
	int su, ia, ib = 1;

	printf("”‚ÍH ");
	scanf("%d", &su);

	do {
		ia = 0;
		do {
			printf("*");
			ia++;
		} while (ib > ia);
		ib++;
		printf("\n");
	} while (su >= ib);
}