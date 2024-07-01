#include <stdio.h>
#include<string.h>
void sort(int data[], char moji[]);

main(void)
{
	char moji[35];
	int data[] = {1,3,2,4,6,5,8,9,7,10 };
	//”äŠr‰ñ”

	printf("ƒ\[ƒg•ûŒü‚ð“ü—Í : ");
	gets(moji);

	sort(data, moji);

	return 0;
}

void sort(int data[], char moji[]) {

	int i, k;
	int wrk;


	if (strcmp(moji, "~‡") == 0) {

		for (i = 9; i > 0; i--) {

			for (k = 0; k < i; k++) {


				if (data[k + 1] > data[k]) {

					wrk = data[k + 1];
					data[k + 1] = data[k];
					data[k] = wrk;

				}

			}

		}


	}

	if (strcmp(moji, "¸‡") == 0) {

		for (i = 9; i > 0; i--) {


			for (k = 0; k < i; k++) {
		
				if (data[k + 1] > data[k]) {

					wrk = data[k];
					data[k] = data[k + 1];
					data[k + 1] = wrk;

				}

			}
		}

	}


	for (i = 0; i < 10; i++) {

		printf("%3d", data[i]);

	}

}