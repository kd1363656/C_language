#include <stdio.h>
main()
{
	int i = 100,j = 10,o;
	int* p_i, * p_j;

	//�A�h���X�̓ǂݍ���

	p_i = &i;
	p_j = &j;

	//�A�h���X���Q�Ƃ��Đ����ɉ�����

	printf("100 + 10 = %d\n", *p_i + *p_j);
	printf("100 - 10 = %d\n", *p_i - *p_j);
	printf("100 * 10 = %d\n", *p_i * *p_j);
	printf("100 / 10 = %d\n", *p_i / *p_j);


}