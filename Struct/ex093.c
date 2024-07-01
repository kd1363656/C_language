#include <stdio.h>
struct syohin_data {

	char name[20];
	int tanka;
	int kosuu;

};

main(void)
{
	struct syohin_data syohin[] = { {"エンビツ",30,5},
	{"ケシゴム", 50,2},
	{"フデバコ",500,3} };

	struct syohin_data* p;
	int kingaku;

	p = syohin;

	int i;
	for (i = 0; i < 3; i++) {

		kingaku = p->kosuu * p->tanka;

		printf("商品名 : %s\t", p->name);
		printf("単価 : %4d\t", p->tanka);
		printf("個数 : %4d\t", p->kosuu);
		printf("金額 : \\%5d\n",kingaku);
		p++;

	}

	return 0;
}