#include <stdio.h>
//�V�F���\�[�g�ɂ�鏸���\�[�g

//�f�[�^�����`
#define DCNT 8

main()
{
	int d[DCNT] = {70,60,80,50,40,20,30,10};
	int i, j;
	int w;
	int gap;

	//�@�V�F���\�[�g
	gap = DCNT / 2; //�S�f�[�^��/2�Ŏi���̔�r�Ԋu�����߂�

	while (gap > 0) {

		for (i = gap; i < DCNT; i++) {
			for (j = i - gap; j >= 0; j -= gap) {

				//�m�F�p�ɕ\��
				int k;
				for (k = 0; k < DCNT; k++) {
					printf("%d ", d[k]);
				}
				printf("\n");

				if (d[j + gap] < d[j]) { //j + gap�Ԗڂ�j�ԖڂƔ�r
					//d[j]��d[j + gap]
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
				else {
					break;
				}

			}

		}



		gap = gap / 2;  //��r���o�𔼕��ɂ���
		printf("----------------------\n"); //�m�F�p�ɕ\��

	}
		for(i = 0; i < DCNT; i++) {
			printf("%d ", d[i]);
		}

	

}