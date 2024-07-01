#include <stdio.h>

//プロトタイプ宣言
int goukei(int, int, int);
float heikinn(float,float);

main()
{
	int a,b,c;
	int sum;
	float hei,d = 3;

	printf("整数を３つ入力");
	scanf("%d%d%d", &a,&b,&c);

	sum = goukei(a, b, c);
	hei = heikinn((float)sum,d);

	printf("合計は %d 平均は %.2f", sum, hei);




}

int goukei(int x, int y, int z) {

	int sum = x + y + z;//return a + b + cでもできる
	return sum;  
	//関数goukeiを実行してsumに代入してから
	//関数heikinnを実行
}

float heikinn(float sum,float b) {

	float hei = (float)sum / b;
	return hei;

}