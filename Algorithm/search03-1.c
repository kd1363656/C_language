#include<stdio.h>
main() {

	int data[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int mid, low = 0, high = 11,su,i;

	printf("探索値を入力");
	scanf("%d", &su);

	for (i = 0; low <= high; i++) {

		mid = (high + low) / 2;

		if (su == data[mid])break;

		if (data[mid] < su) {

			low = mid + 1;

		}

		else {

			high = mid - 1;

		}

	}

	if (low > high) {

		printf("見つかりませんでした\n探索回数%d",i);
		

	}

	else {

		printf("探索値%dは%d回で見つかりました", su, i);

	}

}