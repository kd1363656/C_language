#include <stdio.h>
main(void)
{

	int data[] = {10, 5, 30, 77, 16, 3, 47, 29, 37, 33};
	int i,su;

	printf("�T���Ă��鐔����?");
	scanf("%d", &su);

	for (i = 0; i < 10; i++) {

		if (data[i] == su)break;

	}

	if (i > 9) {

		printf("������܂���ł���");

	}
	else {

		printf("\n���T���̐�����%d\n�T���񐔂�%d�ł�",su,i + 1);

	}

	return 0;
}