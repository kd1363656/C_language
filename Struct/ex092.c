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

	int i;
	for (i = 0; i < 3; i++) {

		printf("商品名%s\t", syohin[i].name);
		printf("単価 : %4d\t", syohin[i].tanka);
		printf("個数 : %4d\n", syohin[i].kosuu);

	}

	return 0;
}