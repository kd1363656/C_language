#include <stdio.h>
main()
{
	float x[3][2], sum ;
	int i,j;
	//float x[3][2]‚Ì‚¤‚¿‚Ì‚R
	for (j = 0; j < 3; j++) {

		for (sum = 0, i = 0; i < 2; i++) {
			printf("x[%d][%d]=",j,i);
			scanf("%f", &x[j][i]);
			sum += x[j][i];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n", j,sum / 2);
	}
}