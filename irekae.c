#include <stdio.h>
main()
{
	int a = 5;
	int b = 3;
	int w;

	w = a;
	a = b;
	b = w;
	printf("%d\t%d", a, b);
}