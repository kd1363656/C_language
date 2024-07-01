#include <stdio.h>
main()
{
	int data[] = { 10,9,21,20,45,1,88,45,38 },max = data[0], min = data[0], i;
	int* p_d;

	p_d = data;

	for(i = 0; i < 9; i++){

		printf("現在のアドレス%d\n",p_d);
		//data中を進むごとにp_dも4バイト進む

		if (max < *p_d) {

			max = *p_d;

		}
		if (min > *p_d) {

			min = *p_d;

		}

		p_d++;

	}

	printf("最大値 = %d\n最小値 = %d\n",max,min);

}