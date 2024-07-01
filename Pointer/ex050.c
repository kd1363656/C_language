#include <stdio.h>
main()
{
	int a = 100;
	int *p_a;



	printf("%d\n", a);

	printf("%d\n", &a);

	p_a = &a;

	printf("%d\n",p_a);

	printf("%d\n", *p_a);

	printf("%d\n", &p_a);
	
}