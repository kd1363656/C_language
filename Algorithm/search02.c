#include<stdio.h>
main() {

	int su, i;
	int data[11] = { 10,20,30,40,50,60,70,80,90,100};

	printf("探索値を入力");
	scanf("%d", &su);

	//自分で仕込んだ番兵がけつに来る

	for (data[10] = su, i = 0; su != data[i]; i++);

	if (su == data[10]) {

		printf("見つからなかった");
		printf("探索回数　%d", i);
	}
	else {

		printf("見つかった\n");
		printf("探索回数%dで探索値%dを発見\n", i,su);

	}

	//リニアサーチ　処理効率悪い
	//番兵法　処理効率が良い



}