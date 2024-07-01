#include <stdio.h>
main()
{
	char*p = "ringo";
	char moji2[30], * p_moji2;

	p_moji2 = p;

	printf("”z—ñ“à—e = ");

	while (*p) {

		putchar(*p++);

	}

	printf("\n‹t‡Œ‹‰Ê = ");

	*p--;

	while (*p_moji2) {

		putchar(*p_moji2++);
		*p--;

	}


}