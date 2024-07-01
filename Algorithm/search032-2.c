#include <stdio.h>
main()
{
	int d[] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int su, i;
	int min = 0, max = 10,mid;

	printf("探索値を入力？");
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

		printf("見つからんわハゲ");

	}
	else {

		printf("探索値%dは%d回で見つかりました", su, i+1);

	}

}