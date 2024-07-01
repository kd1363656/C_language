#include <stdio.h>
main()
{
	int i;
	double data[] = { 10.8, 20.3,30.6,40.4,50.5 };
	double*p_d;
	double sum = 0, hei = 0;

	p_d = data;

	printf("配列 data[] = ");

	for (i = 0; i < 5; i++) {

		printf("%f \n",*p_d);
		printf("現在のp_dのアドレス %d \n", p_d);
		sum += *p_d;
		p_d++;
		hei++;

	}
	printf("\n合計 = %.3f\n平均 =%.3f\n", sum , sum / hei);

}