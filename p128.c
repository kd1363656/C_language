#include <stdio.h>
main()
{

	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 }, * p_a;
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 }, * p_b;
	int i;
	
	printf("配列 b = \n");

	for (p_a = a, p_b = b; *p_b += *p_a; p_a++, p_b++) {
		
		printf("p_aのアドレス %d \n", p_a);
		printf("p_bのアドレス %d \n", p_b);
		printf("%d \n", *p_b);

	}

}