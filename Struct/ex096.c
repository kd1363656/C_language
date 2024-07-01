#include <stdio.h>

struct syohin_data {

	char name[20];
	int tanka;

};

void display3(struct syohin_data *p);

main(void)
{
	struct syohin_data syohin = {"ƒPƒVƒSƒ€",50};

	display3(&syohin);

	return 0;
}

void display3(struct syohin_data *p) {

	printf("syohin.mame = %s	syohin.tanka = %d\n",
		p->name, p->tanka);
	printf("%s %d\n", (*p).name, (*p).tanka);

}