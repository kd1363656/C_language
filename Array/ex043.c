#include <stdio.h>
main()
{
	char box[] = "orange";//������̒�����6
	int i;

	for (i = 0; box[i] != '\0'; i++);//��
	//��
	//������̃A�h���X7��NULL�l�Ȃ̂Ń��[�v���甲����
	//�A�h���X����Ƃ��Ă��Ă���̂�0�ł��\
	
	printf("������ : %s\n", box);//&box[0]�ł͂Ȃ�box�����ł��\
	printf("��������%d�ł�", i);

}