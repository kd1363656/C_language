#include <stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{

	int data[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 },
		target, w, i;

	//�ǂ��V���b�t��

	srand(time(0));

	for (i = 0; i < 20; i++) {

		rand();

		//target��0�`19�̗���������

		target = rand() % 20;

		//1�Ԗڂ�target�Ԗڂ̃f�[�^�����ւ���

		w = data[i];
		data[i] = data[target];
		data[target] = w;

	}

	//���ʕ\��

	for (i = 0; i < 20; i++) {

		printf("%d ", data[i]);

	}

}