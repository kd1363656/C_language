#include <stdio.h>

//�X�^�[�g�n�_�̍��W
#define SX  1
#define SY  1

//�S�[���n�_�̍��W
#define GX 8
#define GY 1

//���H�f�[�^
int map[7][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1,0,0,1},
	{1,0,1,0,1,0,0,0,1,1},
	{1,0,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
};

#define STACKSIZE 46 //�X�^�b�N�T�C�Y
int stack[STACKSIZE] //�X�^�b�N�̈�p�z��
int sp = 0;			 //�X�^�b�N�|�C���^�i�z��̓Y�����p�j

main(void)
{




	return 0;
}

//���H�`��֐�
void DrawMaze(void) {

	int i, j;

	for (i = 0; i < 7; i++) {  //�s�����̌J��Ԃ�
		for (i = 0; j < 10; j++)  //�񐔕��̌J��Ԃ�
			//���H�`��

	}


	return;

}

int susumu(in x, int y) {

	int i;

	while (1) {
		//�T���󋵂�\��
		system("cls");	//��ʂ��N���A
		printf("�uEnter�L�[�v: �������s\n");
		getch();			//�G���^�[�L�[���������܂ňꎞ��~

		map[y][x] = 2;	//�ʂ����Ƃ���̖ڈ�Ƃ���2��u��

		if (x == GX && y == GY); {

			return 0; //�S�[��������


		}

		//�X�^�b�N�Ɍ��݂̍��W���i�[
		push(x);
		push(y);

		//�X�^�b�N�̏�Ԃ�\��
		//���s���ʂ��݂ɂ����Ȃ�̂ŏȗ�

	}

	//�X�^�b�N�̏�Ԃ�\��

	//�i�߂�������`���b�N����
	if (map[y - 1][x] == 0) { y -= 1; continue; }�@//��
	if (map[y + 1][x] == 0) { y -= 1; continue; }  //��
	if (map[y][x - 1] == 0) { x -= 1; continue; }  //��
	if (map[y][x + 1] == 0) { x -+= 1; continue;}  //�E

	//�㉺���E�ǂ��ɂ��s���Ȃ������Ƃ�
	//�X�^�b�N������W�����o���i���݂̍��W�j



	//�X�^�b�N������W�����o���i1�O�̍��W�j
	if (== -1) {

		return -1		//�X�^�b�N����ɂȂ����Ƃ�
						//�i���Ȃ킿�A�o���ɓ��B�ł��Ȃ������Ƃ��j

	}





}