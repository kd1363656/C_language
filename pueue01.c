#include <stdio.h>

#define QUEUESIZE 8		//	�L���[�T�C�Y
int queue[QUEUESIZE];	//�L���[�̈�p�z��
int head = 0;			//�L���[�擪�f�[�^�̃|�C���^(�z��̓Y�����p)
int tail = 0;			//�L���[�I�[�f�[�^�̃|�C���^(�z��̓Y�����p)

void display(void);
int enqueue(int d);
int dequeue(int *pd);

main(void)
{
	int key, data, result;

	do {

		printf("\n\n���G���L���[��i�A�f�L���[��o����͂��ā�");
		key = getche();
		printf("\n");

		//�G���L���[����
		if (key == 'i') {

			printf("�f�[�^����́�");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {

				printf("\n�������L���[�������ς��ł�������\n");

			}
			else {

				display();

			}

		}

		//�f�L���[����
		if (key == 'o') {

			result = dequeue(&data);
			if (result == -1) {

				printf("\n\n�������L���[����ł�������\n");

			}
			else {

				printf("�L���[����f�[�^(% d)����肾���܂���\n", data);
				display();
			}

		}

	} while (key != 'e');

	return 0;
}

void display(void) {

	int i;

	printf("\n���������݂̃L���[�̓��e������\n");
	for (i = 0; i < QUEUESIZE; i++) {

		printf("queue[%2d]��%5d", i, queue[i]);

		if (i == head) {

			printf("���������Ă���Ƃ���i����head��%d�j", head);	//�m�F�p

		}

		if (i == tail) {

			printf("���������Ă���Ƃ���i����teil��%d�j", tail);	//�m�F�p

		}
		printf("\n");


	}

	return;

}

int enqueue(int d) {

	if ((tail + 1) % QUEUESIZE == head) {

		return -1;

	}

	queue[tail] = d;
	tail++;
	tail = tail % QUEUESIZE;

	return 0;

}

int dequeue(int *pd) {

	if (tail == head) {

		return -1;

	}
	*pd = queue[head];
	queue[head] = 0;
	head++;
	head = head % QUEUESIZE;

	return 0;

}