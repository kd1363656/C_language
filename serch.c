#include <stdio.h>
main()
{

	int s,data[10] = {50,10,44,32,99,91,60,77,3,100}, i;

	printf("�T���ls�����");
	scanf("%d", &s);

	for (i = 0; i < 10; i++) {

		if (s == data[i]) break;

	}

	if (i >= 10) {

		printf("������Ȃ�����\n");
		printf("�T����%d", i);
	}
	else {

		printf("��������\n");
		printf("�T����%d\n",i);
	}

}