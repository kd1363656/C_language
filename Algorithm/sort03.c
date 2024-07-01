#include <stdio.h>
main()
{
	int data[] = { 30,7,25,16,10 };
	int i, j, w;

	for (i = 1; i < 5; i++) {

		for (j = i - 1; j >= 0; j--) {

			if (data[j + 1] >= data[j])break;

			//if (data[j] > data[j + 1]) {
				
				w = data[j];
				data[j] = data[i];
				data[i] = w;

			//}
		}

	}

	for (i = 0; i < 5; i++) {

		printf("%d ", data[i]);

	}

}