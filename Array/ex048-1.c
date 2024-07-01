#include <stdio.h>
main()
{
	int data[2][2][3] = { {{3,4,5},{4,5,6}},
		{{2,2,3},{2,5,6}} };

	int i, j, k, sum;

	for (i = 0 , sum =0; i < 2; i++) {

		for (j = 0; j < 2; j++ ) {

			for (k = 0; k < 3; k++) {
				sum += data[i][j][k];


			}

		}

	}

	printf("‘S‘Ì‚Å%dlZ‚ñ‚Å‚¢‚Ü‚·", sum);


}