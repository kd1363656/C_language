#include <stdio.h>
main()
{
	int kei,i, j, a[2][3] = { {10,20,30},{1,2,3} };

	for (i = 0, kei = 0; i < 2; i++) {



		for (j = 0; j < 3; j++) {

			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
			kei += a[i][j];
		}

		printf("%ds–Ú‚Ì‡Œv = %d\n\n", i, kei);

	}
}