#include <stdio.h>

#define QUEUESIZE 8		//	キューサイズ
int queue[QUEUESIZE];	//キュー領域用配列
int head = 0;			//キュー先頭データのポインタ(配列の添え字用)
int tail = 0;			//キュー終端データのポインタ(配列の添え字用)

void display(void);
int enqueue(int d);
int dequeue(int *pd);

main(void)
{
	int key, data, result;

	do {

		printf("\n\n▼エンキューはi、デキューはoを入力して＞");
		key = getche();
		printf("\n");

		//エンキュー処理
		if (key == 'i') {

			printf("データを入力＞");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {

				printf("\n＊＊＊キューがいっぱいです＊＊＊\n");

			}
			else {

				display();

			}

		}

		//デキュー処理
		if (key == 'o') {

			result = dequeue(&data);
			if (result == -1) {

				printf("\n\n＊＊＊キューが空です＊＊＊\n");

			}
			else {

				printf("キューからデータ(% d)を取りだしました\n", data);
				display();
			}

		}

	} while (key != 'e');

	return 0;
}

void display(void) {

	int i;

	printf("\n＝＝＝現在のキューの内容＝＝＝\n");
	for (i = 0; i < QUEUESIZE; i++) {

		printf("queue[%2d]は%5d", i, queue[i]);

		if (i == head) {

			printf("←が示しているところ（現在headは%d）", head);	//確認用

		}

		if (i == tail) {

			printf("←が示しているところ（現在teilは%d）", tail);	//確認用

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