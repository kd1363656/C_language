#include <stdio.h>
struct syohinn_data {

	char name[20];
	int tanka;

};

main(void)
{
	struct syohinn_data syouhin;
	struct syohinn_data* p;
	p = &syouhin;
	printf("¤•i–¼ = ");
	scanf("%s", p->name);
	p->tanka = 30;
	printf("p->name = %s\n", p->name);
	printf("p->tanka = %d\n", p->tanka);
	printf("syouhin.name = %s\n", syouhin.name);
	printf("syouhin.tanak = %d\n", syouhin.tanka);

	return 0;
}