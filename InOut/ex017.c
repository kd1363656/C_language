#include <stdio.h>
main()
{
	float a=2.1, b=3.1, c=4.1 ;
	printf("1つ目の実数:");
	scanf("%f", &a);
	printf("2つ目の実数:");
	scanf("%f", &b);
	printf("3つ目の実数:");
	scanf("%f", &c);
	printf("合計=%.2f 平均=%.2f", a + b + c, (a + b + c) / 3);

}