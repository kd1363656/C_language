#include <stdio.h>
main()
{
	int a, b;
	printf("一つ目の整数:");
	scanf("%d", &b);
	printf("二つ目の整数:");
	scanf("%d", &a);
	printf("入力値は%dです", a + b);
}