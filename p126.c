#include <stdio.h>
main()
{
	int data[] = { 10,9,21,20,45,1,88,45,38 },max = data[0], min = data[0], i;
	int* p_d;

	p_d = data;

	for(i = 0; i < 9; i++){

		printf("���݂̃A�h���X%d\n",p_d);
		//data����i�ނ��Ƃ�p_d��4�o�C�g�i��

		if (max < *p_d) {

			max = *p_d;

		}
		if (min > *p_d) {

			min = *p_d;

		}

		p_d++;

	}

	printf("�ő�l = %d\n�ŏ��l = %d\n",max,min);

}