#include <stdio.h>
main()
{
	//int	tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} }, i;

	//int* p_tbl;

	//printf("二次元配列tblの内容\n");

	//for (i = 0; i < 3; i++) {

	//	p_tbl = &tbl[i][1];
	//	printf("%d ", *p_tbl);

	//}

	//printf("\n");
	//

	int	tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} }, i;

	int* p_tbl;

	p_tbl = &tbl[0][1];

	printf("二次元配列tblの内容\n");

	for (i = 0; i < 3; i++) {
		printf("%d ", *p_tbl);
		p_tbl += 3;

	}

	printf("\n");


	//int	tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} }, i;

	//int* p_tbl;

	//p_tbl = tbl[0];

	//printf("二次元配列tblの内容\n");

	//for (i = 0; i < 3; i++) {

	//	*p_tbl++;
	//	printf("%d ", *p_tbl++);
	//	*p_tbl++;

	//}

	//printf("\n");
	
}