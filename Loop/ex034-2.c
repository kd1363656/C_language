#include <stdio.h>
main()
{
	int num ,sum;

	printf("”‚ÍH ");
	scanf("%d", &num);

	do {
		num--;
		sum = 5;
		do {
			printf("*");
			sum--;
		} while (sum > 0);
		printf("\n");
	} while (num > 0);
}