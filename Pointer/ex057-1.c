#include <stdio.h>
main()
{
	int	tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} }, i, j;

	int* p_tbl;

	p_tbl = &tbl[1][0];

	printf("“ñŽŸŒ³”z—ñtbl‚Ì“à—e\n");

	for (i = 0; i < 3; i++) {

		printf("%d ", *p_tbl++);


	}

	printf("\n");

}