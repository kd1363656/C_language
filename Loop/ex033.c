#include <stdio.h>
main()
{
	int num ,sum ,avg;

	printf("数は？ ");
	scanf("%d", &num);

	for (sum = 0,avg = 0; num != -999; avg++) {
		sum += num;
		printf("数は？ ");
		scanf("%d", &num);
	}
	printf("合計 = %d          平均 = %.2f", sum, (float)sum / avg);
}