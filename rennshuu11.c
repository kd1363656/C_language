#include <stdio.h>
main(void)
{
	int data[11] = { 10,5,30,77,16,3,47,29,37,33 };
	int i, su;

	data[10] = -999;

	printf("�T����������");
	scanf("%d", &su);

	for (i = 0; su != data[i]; i++);

	if (i >= 10) {

		printf("������܂���ł���\n�T����%d",i);

	}

	else {

		printf("�T������������%d�ł�\n�T����%d", data[i], i + 1);

	}


	return 0;
}