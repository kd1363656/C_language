#include <stdio.h>
main()
{
	float a, b, c ;
	printf("������3����:");
	scanf("%f%f%f", &a, &b, &c);
	printf("���v=%.0f  ����=%.2f\n", a + b + c, (a + b + c) / 3);
}