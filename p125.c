#include <stdio.h>
main()
{
	int data[] = { 10,20,30,40,50,60,70,80,90,-999 },i;
	int* p_d;

	printf("�|�C���^���Œ�ŕ\��\n�z�� data[ ] = ");

	for (i = 0; i < 9; i++) {

		p_d = data;
		p_d += i;
		printf("%d ",*p_d);

	}

	p_d = data;

	printf("\n�|�C���^��ω������ĕ\��\n�z�� data[ ] = ");

	while (*p_d != -999) {

		printf("%d " ,*p_d++);

	}



}