#include <stdio.h>

//return�l��ans���߂��Ă���
int add(int,int); //�֐��̃v���g�^�C�v�錾

int main(void)
{
	int a, b, kotae1,kotae2;//main�̒���a
	printf("�������Q���́F ");
	scanf("%d%d", &a, &b);

	kotae1 = add(a, b);	//�֐�add�̌Ăяo��
	kotae2 = add(1, 2); //���l

	printf("kotae1�̍��v��%d�ł�\nkotae2�̍��v��%d�ł�", kotae1,kotae2);

	return 0;

}


//�֐�add�̋L�q
int add(int a, int b) {//a,b�͉�����

	int ans;

	ans = a + b;

	return ans;

}