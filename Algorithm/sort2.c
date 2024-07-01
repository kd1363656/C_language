#include <stdio.h>
main(void)
{

	int d[] = { 30,7,25,16,10 };
	int i, j, w;

	for (i = 4; i >= 0; i--) {

		for (j = 0; j < i; j++) {

			if (d[i] < d[j]) {

				w = d[j];
				d[j] = d[i];
				d[i] = w;

			}

		}

	}

	for (i = 0; i < 5; i++) {

		printf("%d ", d[i]);

	}


	return 0;
}