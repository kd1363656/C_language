#include <stdio.h>
main()
{
	char moji[] = "kadai12h.c";
	char* p_moji;

	p_moji = moji;

	printf("�z����e = ");

	while (*p_moji) {

		printf("%c", *p_moji++);

	}

}