#include <stdio.h>

void wahei(int i, int j, int* sum, float* avg);

main()
{
	int a,b,sum;
	float avg;

	printf("整数を二つ入力 : ");
	scanf("%d%d", &a,&b);
	wahei(a,b,&sum,&avg);
	printf("合計は %d 、平均は %.2f", sum, avg);

}

void wahei(int i, int j, int* sum, float* avg) {

	*sum = i + j;

	*avg = (float)*sum / 2;

	return;
}