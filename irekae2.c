#include <stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{

	int data[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 },
		target, w, i;

	//良くシャッフル

	srand(time(0));

	for (i = 0; i < 20; i++) {

		rand();

		//targetに0～19の乱数を入れる

		target = rand() % 20;

		//1番目とtarget番目のデータを入れ替える

		w = data[i];
		data[i] = data[target];
		data[target] = w;

	}

	//結果表示

	for (i = 0; i < 20; i++) {

		printf("%d ", data[i]);

	}

}