#include <stdio.h>
main()
{
	int d[] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int su, i;
	int min = 0, max = 10,mid;

	printf("�T���l����́H");
	scanf("%d", &su);

	for (i = 0; min <= max; i++) {

		mid = (max + min) / 2;


		if (su == d[mid])break;

		if (su < d[mid]) {

			max = mid - 1;

		}
		else {

			min = mid + 1;

		}

	}

	if (min > max) {

		printf("��������n�Q");

	}
	else {

		printf("�T���l%d��%d��Ō�����܂���", su, i+1);

	}

}