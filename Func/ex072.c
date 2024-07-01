#include <stdio.h>

void display(int a);	//プロトタイプ宣言

main()
{
	int a;
	printf("data ?: ");
	scanf(" %d", &a);
	display(a);
	//戻り値が戻ってくる
}

//関数displayの記述
void display(int a)	//displayの引数を受け取るための受けもの
{

	printf("入力データ= %d\n", a);
	return;

}
//関数は呼び出されて役割を果たしたら消える。