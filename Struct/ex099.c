#include <stdio.h>
#define DATA_END -1


struct ken {

	int code;
	char name[20];
	struct ken* next;

};

main(void)
{

	struct ken	ken_data[] = { {1,"�k�C��",NULL},
	{ 2,"�X��",NULL },
	{ 3,"��茧",NULL },
	{ 4,"�{�錧",NULL },
	{ 5,"�H�c��",NULL },
	{ 6,"�R�`��",NULL },
	{ 7,"������",NULL },
	{ DATA_END,"",NULL } };

	struct ken hyogo = { 28,"���Ɍ�",NULL };

	struct ken* p, * wp;

	//�����N�̐ݒ�
	p = wp = ken_data;//�A�h���X�Q�Ƃ���Ȃ��Ȃ�ŁH

	do {

		p++;
		wp->next = p;
		wp = p;

	} while (p->code != DATA_END);



	//�����N�̕\��
	for (p = ken_data; p->code != DATA_END; p = p->next) {

		printf("code = %d	name = %s\n", p->code, p->name);

	}

	printf("-----------------------------------------\n");

	hyogo.next = ken_data[0].next;
	ken_data[0].next = &hyogo;

	ken_data[1].next = ken_data[2].next;



	for (p = ken_data; p->code != DATA_END; p = p->next) {

		printf("code = %d	name = %s\n", p->code, p->name);

	}

	return 0;
}