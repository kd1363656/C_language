#include <stdio.h>
main()
{
	char* p_game[] = { "wii","ds","playstation4" };
	char** p;
	int i;

	//p_game�̃A�h���X��**p�ɑ��
	
	p = p_game;

	for (i = 0; i < 3; i++) {

		while (**p) {	//wii,ds,playstation�̂���

			printf("%c",**p);	//w��\��
			(*p)++; //�������������
		}
		printf("\n");
		p++;	//wii����ds�Ɉړ�

	}

}