#include <stdio.h>
main()
{

	float x[3][2], kei;
	int j, k;
	
	for (j = 0; j < 3; j++) {

		for (k = 0,kei = 0; k < 2; k++) {

			printf("x[%d][%d] =", j, k);
			scanf(" %f",&x[j][k]);
			kei += x[j][k];
		}

		printf("\n%ds–Ú‚Ì•½‹Ï = %.2f\n\n",j,kei / 2);
	}

}