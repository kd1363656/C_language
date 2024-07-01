#include <stdio.h>
main()
{
	int i = 100,j = 10,o;
	int* p_i, * p_j;

	//アドレスの読み込み

	p_i = &i;
	p_j = &j;

	//アドレスを参照して数字に化ける

	printf("100 + 10 = %d\n", *p_i + *p_j);
	printf("100 - 10 = %d\n", *p_i - *p_j);
	printf("100 * 10 = %d\n", *p_i * *p_j);
	printf("100 / 10 = %d\n", *p_i / *p_j);


}