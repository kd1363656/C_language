#include <stdio.h>
main()
{
	char*p = "ringo";
	char moji2[30], * p_moji2;

	p_moji2 = p;

	printf("�z����e = ");

	while (*p) {

		putchar(*p++);

	}

	printf("\n�t������ = ");

	*p--;

	while (*p_moji2) {

		putchar(*p_moji2++);
		*p--;

	}


}