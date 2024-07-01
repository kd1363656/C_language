#include <stdio.h>
main()
{

	int a = 50, b = 10,c = 0;
	int* pa, * pb;

	pa = &a;
	pb = &b;

	c = *pa + *pb;

	printf("%d\n", c);

	printf("&a = %d &b = %d &c =%d\n", &a, &b, &c);
	printf("p_a = %d p_d = %d\n", pa, pb);
}