#include<stdio.h>

main() {

	char moji;

	printf("'0'〜'9までの数字を入力");
	scanf("%c", &moji);

	if (moji >= '0' && moji <= '9') {

		int suu;

		suu = moji - '0';

		printf("入力された文字を小数点で表すと%f", (float)suu);



	}

}