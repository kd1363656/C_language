#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {

	int crt,
	i	;

	srand(time(0));

	rand();

	crt = rand() % 5 + 1;

	printf("�����̂��Ȃ��̉^����");

		for (crt; crt > 0; crt--) {

			printf("��");

		}
		printf("�ł��B\n")
}