#include <stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char d[20];
	int n,i,rdm,k[5];

	printf("���������͂��Ă�������");
	scanf("%s",&d);

	srand(time(0));

	for (i = 0; d[i]; i++) {

		rand();

		k[i] = rand() % 6;

		d[i] += k[i];

	}

	printf("�Í����������\��%s\n�Í����L�[��", d);

	for (n = 0; n < i; n++) {

		printf("%d", k[n]);

	}

}