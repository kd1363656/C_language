#include <stdio.h>
main(void)
{
	int d[] = { 30,7,25,16,10 };
	int i, k,wk;

	for (i = 0; i < 4; i++) {
		
		for (k = i + 1; k < 5; k++) {

			if (d[i] > d[k]) {

				wk = d[k];
				d[k] = d[i];
				d[i] = wk;

			}

		}

	}

	for (i = 0; i < 5; i++) {

		printf("%d ", d[i]);

	}

	return 0;
}