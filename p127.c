#include <stdio.h>
main()
{
	int i;
	double data[] = { 10.8, 20.3,30.6,40.4,50.5 };
	double*p_d;
	double sum = 0, hei = 0;

	p_d = data;

	printf("�z�� data[] = ");

	for (i = 0; i < 5; i++) {

		printf("%f \n",*p_d);
		printf("���݂�p_d�̃A�h���X %d \n", p_d);
		sum += *p_d;
		p_d++;
		hei++;

	}
	printf("\n���v = %.3f\n���� =%.3f\n", sum , sum / hei);

}