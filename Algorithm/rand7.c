#include <stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int num,su = 0,i = 0;

	srand(time(0));

	rand();

	num = rand() % 1000 + 1;

	while (1) {

		printf("当たりの数は？->");
		scanf("%d", &su);

		if (su < num) {
			printf("当たりの数より小さいです");
		}

		if (su > num) {
			printf("当たりの数より大きいです");
		}

		i++;

		if (su == num)break;

	}

	printf("正解%d回で当たりました", i);

}