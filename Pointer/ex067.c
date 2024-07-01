#include <stdio.h>
#include<string.h>
main()
{
	char* p_tbl[] = { "Programming2","Algorithm","Programming1","C" };
	char** pp_tbl;
	char* w;
	int i, j;

	pp_tbl = p_tbl;

	for (i = 0; i < 3; i++) {

		for (j = i + 1; j < 4; j++) {
			if (strcmp(pp_tbl[i], pp_tbl[j]) < 0) {

				w = pp_tbl[j];
				pp_tbl[j] = pp_tbl[i];
				pp_tbl[i] = w;
			}

		}
	}

	for (i = 0; i < 4; i++) {

		printf("%s\n", pp_tbl[i]);

	}

}