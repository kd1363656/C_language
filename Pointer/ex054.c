#include <stdio.h>
main()
{
	/*int i;

	int itbl[3] = { 10,20,30 };
	int* p_itbl;

	double dtbl[3] = { 10.0,20.0,30.0 };
	double* p_dtbl;

	p_itbl = itbl;
	
	for (i = 0; i < 3; i++) {

		printf("*p_itbl = %d ", p_itbl[i]);

	}
	
	printf("\n");

	p_dtbl = dtbl;

	for (i = 0; i < 3; i++) {

		printf(" * p_itbl = %.1f ",p_dtbl[i]);

	}*/


		int itbl[3] = { 10,20,30 };
		int* p_itbl;
		//4Byte�g������
		double dtbl[3] = { 10.0,20.0,30.0 };
		double* p_dtbl;

		p_itbl = itbl;//&�����Ă��Ȃ��Ȃ��Ȃ�z�񖼂��擪�A�h���X
		printf("*p_itbl = %d\n", *p_itbl);
		printf("*p_itbl = %d\n", p_itbl);
		//���̂��v���X�v���X�łS�o�C�g�オ���Ă�
		//int�^��4�o�C�g�g���邪���̂���3�o�C�g�̓[��
		p_itbl++;
		printf("%d\t", *p_itbl);
		printf("*p_itbl = %d\n", p_itbl);
		p_itbl++;
		printf("%d\n", *p_itbl);

		p_dtbl = dtbl;
		printf("*p_dtbl = %.1f\t", *p_dtbl);
		p_dtbl++;
		printf("%.1f\t", *p_dtbl);
		p_dtbl++;
		printf("%.1f\n", *p_dtbl);

}