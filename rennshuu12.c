#include <stdio.h>
main(void)
{
	int data[] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int high = 10, low = 0, mid;
	int su,i;

	printf("�T���������������");
	scanf("%d", &su);

	for (i = 0; low <= high; i++) {

		mid = (high + low) / 2;

		if (su == data[mid])break;

		if (su < data[mid]) {

			high = mid - 1;

		}

		else {

			low = mid + 1;

		}

	}

	if (low > high) {

		printf("������܂���ł���");

	}
	else {

		printf("�T����%d�ŒT���l%d�������܂���", i + 1, su);

	}


	return 0;


}