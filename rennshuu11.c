#include <stdio.h>
main(void)
{
	int data[11] = { 10,5,30,77,16,3,47,29,37,33 };
	int i, su;

	data[10] = -999;

	printf("探したい数字");
	scanf("%d", &su);

	for (i = 0; su != data[i]; i++);

	if (i >= 10) {

		printf("見つかりませんでした\n探索回数%d",i);

	}

	else {

		printf("探索した数字は%dです\n探索回数%d", data[i], i + 1);

	}


	return 0;
}