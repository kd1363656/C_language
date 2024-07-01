#include <stdio.h>
main()
{
	int num ;

	printf("”‚ÍH ");
	scanf("%d", &num);

	do {
		num--;
		printf("*****\n");
	} while(num > 0);
}