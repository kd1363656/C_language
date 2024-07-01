#include <stdio.h>

//return値のansが戻ってくる
int add(int,int); //関数のプロトタイプ宣言

int main(void)
{
	int a, b, kotae1,kotae2;//mainの中のa
	printf("整数を２つ入力： ");
	scanf("%d%d", &a, &b);

	kotae1 = add(a, b);	//関数addの呼び出し
	kotae2 = add(1, 2); //同様

	printf("kotae1の合計は%dです\nkotae2の合計は%dです", kotae1,kotae2);

	return 0;

}


//関数addの記述
int add(int a, int b) {//a,bは仮引数

	int ans;

	ans = a + b;

	return ans;

}