#include <stdio.h>
#define DATA_END -1


struct ken {

	int code;
	char name[20];
	struct ken* next;

};

main(void)
{

	struct ken	ken_data[] = { {1,"北海道",NULL},
	{ 2,"青森県",NULL },
	{ 3,"岩手県",NULL },
	{ 4,"宮城県",NULL },
	{ 5,"秋田県",NULL },
	{ 6,"山形県",NULL },
	{ 7,"福島県",NULL },
	{ DATA_END,"",NULL } };

	struct ken hyogo = { 28,"兵庫県",NULL };

	struct ken* p, * wp;

	//リンクの設定
	p = wp = ken_data;//アドレス参照じゃないなんで？

	do {

		p++;
		wp->next = p;
		wp = p;

	} while (p->code != DATA_END);



	//リンクの表示
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