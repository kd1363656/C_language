#include <stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int hen;

	srand(time(0));	//�������������i�V���b�t������j����

	rand();

	hen = rand() % 100;	 //0-5�Ŏn�܂�

	printf("�ϐ��͂�%d�ł�\n", hen);

}