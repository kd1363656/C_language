#include <stdio.h>
main()
{
	int data[10] = {1,2,3,4,5,6,7,8,9,10};
	int su, i, mid, low = 0, high = 10;
	
	printf("探索値sを入力してください");
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

		printf("探索値は見つからなかった\n探索回数%d", i);

	}
	else {

		printf("探索値%dは見つかった\n探索回数%d", su, i);

	}
	








}