#include <stdio.h>

void wahei(int i, int j, int* sum, float* avg);

main()
{
	int a,b,sum;
	float avg;

	printf("���������� : ");
	scanf("%d%d", &a,&b);
	wahei(a,b,&sum,&avg);
	printf("���v�� %d �A���ς� %.2f", sum, avg);

}

void wahei(int i, int j, int* sum, float* avg) {

	*sum = i + j;

	*avg = (float)*sum / 2;

	return;
}