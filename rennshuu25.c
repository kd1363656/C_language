#include <stdio.h>
main()
{
	int data[10] = {1,2,3,4,5,6,7,8,9,10};
	int su, i, mid, low = 0, high = 10;
	
	printf("�T���ls����͂��Ă�������");
	scanf("%d", &su);

	for (i = 0; low <= high; i++) {

		mid = (high + low) / 2;

		if (data[mid] == su)break;

		if (data[mid] > su) {

			high = mid - 1;

		}
		else {

			low = mid + 1;

		}

	}

	if (low > high) {

		printf("�T���l�͌�����Ȃ�����\n�T����%d", i);

	}
	else {

		printf("�T���l%d�͌�������\n�T����%d", su, i);

	}
	








}