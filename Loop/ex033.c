#include <stdio.h>
main()
{
	int num ,sum ,avg;

	printf("���́H ");
	scanf("%d", &num);

	for (sum = 0,avg = 0; num != -999; avg++) {
		sum += num;
		printf("���́H ");
		scanf("%d", &num);
	}
	printf("���v = %d          ���� = %.2f", sum, (float)sum / avg);
}