#include <stdio.h>
main()
{

	double a, b;
	double *p_a, *p_b;


	//p_a��a�̃A�h���X�Ap_b��b�̃A�h���X�����Ă���
	p_a = &a;
	p_b = &b;

	printf("�����l1?");
	scanf("%lf", &a);
	printf("�����l2?");
	scanf("%lf", &b);

	if (*p_a > *p_b) {

		printf("�傫���� = %f", *p_a);

	}
	else {

		printf("�傫���� = %f", *p_b);

	}


}