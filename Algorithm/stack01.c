#include <stdio.h>

#define STACKSIZE 8			//�X�^�b�N�T�C�Y
int stack[STACKSIZE];		//�X�^�b�N�̈�p�̔z��
int sp = 0;					//�X�^�b�N�|�C���^�i�z��̓Y�����p)

void display(void);
int push(int d);
int pop(int* pd);

main(void)
{
	int key, data, result;

	do {

		printf("\n\n���v�b�V����i,�|�b�v��o����͂���>");
		key = getche();
		printf("\n");

		//�v�b�V��������
		if (key == 'i') {

			printf("�f�[�^���́�");
			scanf("%d", &data);
			result = push(data);
			if (result == -1) {

				printf("\n�������X�^�b�N�������ς��ł�������\n");
			}
			else {

				display();

			}

		}

		if (key == 'o'){

			result = pop(&data);
			if (result == -1) {

				printf("\n�������X�^�b�N����ł�������\n");

			}

			else {

				printf("�X�^�b�N����f�[�^(%d)�����o���܂���\n", data);
				display();

			}

		}

	} while (key != 'e');



	return 0;
}

//�X�^�b�N�\���֐�
void display(void) {

	int i;

	printf("\n���������݂̃X�^�b�N�̓��e������\n");
	for (i = 0; i < STACKSIZE; i++) {

		printf("stack[%d]��%5d", i, stack[i]);

			if (i == sp) {

				printf("  ��sp�������Ă���Ƃ���i����sp��%d)", sp);//�m�F�p

			}
			printf("\n");
	}

	return;

}

int push(int d) {

	if (sp >= STACKSIZE) {
		return -1;
	}

	stack[sp] = d;
	sp++;

	return 0;

}

int pop(int *pd){

	if (sp <= 0) {

		return -1;

	}

	pd--;
	sp--;
	*pd = stack[sp];
	stack[sp] = 0;	//�m�F���₷�����邽��

	return 0;
}