#include <stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char d[20];
	int n,i,rdm,k[5];

	printf("文字列を入力してください");
	scanf("%s",&d);

	srand(time(0));

	for (i = 0; d[i]; i++) {

		rand();

		k[i] = rand() % 6;

		d[i] += k[i];

	}

	printf("暗号化文字列を表示%s\n暗号化キーは", d);

	for (n = 0; n < i; n++) {

		printf("%d", k[n]);

	}

}