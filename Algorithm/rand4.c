#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {

	int crt,
	i	;

	srand(time(0));

	rand();

	crt = rand() % 5 + 1;

	printf("今日のあなたの運勢は");

		for (crt; crt > 0; crt--) {

			printf("★");

		}
		printf("です。\n")
}