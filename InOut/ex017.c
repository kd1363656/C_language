#include <stdio.h>
main()
{
	float a=2.1, b=3.1, c=4.1 ;
	printf("1�ڂ̎���:");
	scanf("%f", &a);
	printf("2�ڂ̎���:");
	scanf("%f", &b);
	printf("3�ڂ̎���:");
	scanf("%f", &c);
	printf("���v=%.2f ����=%.2f", a + b + c, (a + b + c) / 3);

}