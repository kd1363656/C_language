#include <stdio.h>
main()
{
	int	tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} }, i,j;

	int* p_tbl;

	p_tbl = tbl[0];

	//printf("�񎟌��z��tbl�̓��e\n");

	//for (i = 0; i < 3; i++) {

	//	for (j = 0; j < 3; j++) {

	//		printf("%d ", *p_tbl++);

	//	}
	//	printf("\n");

	//}

	printf("�񎟌��z��tbl�̓��e\n");

	for (i = 1; i < 10; i++) {

		printf("%d ", *p_tbl++);

		if (i % 3  == 0) {
			printf("\n");
		}
	}

}