#include <stdio.h>

#define TBL_END 5 //’è”‚Ì’è‹`
int tbl_gokei4(int* p);

main(void)
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei4(a);
	printf("gokei = %d\n", gokei);

	return 0;
}

int tbl_gokei4(int* p) {

	int i,sum = 0;
	for (i = 0; i < TBL_END; i++) {

		/*sum += *p++;*/
		sum += *(p + i);


	}

	return sum;

}