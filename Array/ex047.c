#include <stdio.h>
main()
{
	float x[3][2], sum ;
	int i,j;
	//float x[3][2]のうちの３
	for (j = 0; j < 3; j++) {

		for (sum = 0, i = 0; i < 2; i++) {
			printf("x[%d][%d]=",j,i);
			scanf("%f", &x[j][i]);
			sum += x[j][i];
		}
		printf("%d行目の平均=%.2f\n", j,sum / 2);
	}
}