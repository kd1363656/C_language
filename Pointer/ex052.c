#include <stdio.h>
main()
{
	int a = 100, b = 200, w = 0;
	int* pa, * pb;

	pa = &a;
	pb = &b;

	printf("���s�O�Fa = %d\tb = %d\n", *pa, *pb);



	w =  *pa;
	*pa = *pb;
	*pb = w;

	printf("���s��Fa = %d\tb = %d\n", *pa, * pb );
	printf("&a = %d\t&b = %d\tw = %d\n", &a, &b, &w);
	printf("&pa = %d\t&pb = %d\n", pa, pb);


}