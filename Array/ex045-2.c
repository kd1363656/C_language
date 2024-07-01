#include <stdio.h>
main()
{

	int i, j,kei,
		a[2][3] = { {10,20,30,},{1,2,3} };

	for (i = 0,kei = 0; i < 2; i++) {

		for (j = 0; j < 3; j++) {

			kei += a[i][j];

			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
			

		}

		printf("%ds–Ú‚Ì‡Œv = %d\n", i, kei);

	}

}