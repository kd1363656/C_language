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

		printf("������̐��́H->");
		scanf("%d", &su);

		if (su < num) {
			printf("������̐���菬�����ł�");
		}

		if (su > num) {
			printf("������̐����傫���ł�");
		}

		i++;

		if (su == num)break;

	}

	printf("����%d��œ�����܂���", i);

}