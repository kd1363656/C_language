#include <stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66, };
	int* pa;
	float b[] = { 11.1,22.2,33.3,44.4 };
	float* pb;
	
	int i;

	int a_sum = 0;
	int b_sum = 0.0;

	

	pa = a;
	pb = b;
	
	for (i = 0;i < (sizeof a / sizeof(int)); i++) {

		a_sum += *pa;
		pa++;
	}

	printf("�z��a ���v = %d\t���� = %.3f\n", a_sum, (float)a_sum / (sizeof a / sizeof(int)));

	for (i = 0; i < (sizeof b / sizeof(float)); i++) {

		b_sum += *pb;
		pb++;
	}

	printf("�z��b ���v = %.3f\t���� = %.3f\n", (float)b_sum, (float)b_sum / (sizeof b / sizeof(float)));


}