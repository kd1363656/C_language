#include <stdio.h>

void display(int a);	//�v���g�^�C�v�錾

main()
{
	int a;
	printf("data ?: ");
	scanf(" %d", &a);
	display(a);
	//�߂�l���߂��Ă���
}

//�֐�display�̋L�q
void display(int a)	//display�̈������󂯎�邽�߂̎󂯂���
{

	printf("���̓f�[�^= %d\n", a);
	return;

}
//�֐��͌Ăяo����Ė������ʂ������������B