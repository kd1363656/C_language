#include <stdio.h>
main()
{
	int a,sum,hei;
	sum = hei = 0;

	printf("���� : ");

	while (scanf("%d", &a) != EOF) {

		sum += a;
		hei++;
		printf("���� : ");

	}

	printf("���v = %d  ���� = %.2f", sum, (float)sum / hei);





}