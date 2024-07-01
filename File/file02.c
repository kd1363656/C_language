#include <stdio.h>
main(void)
{
	FILE* fp;
	char str[256];
	char dumy;
	int lv, hp,i;
	char equip[100];

	fp = fopen("file03.txt", "r");

	for (i = 0; i < 3; i++) {

		fscanf(fp, "%s", str);
		printf("‘•”õ : %s\n", str);

	}

	fscanf(fp, "%d%d%s", &lv, &hp, equip);
	printf("lv : %d hp : %d ‘•”õ %s\n",lv,hp,equip);

	dumy = fgetc(fp);
	fgets(str, sizeof(str), fp);
	printf("%s\n", str);

	fclose(fp);

	return 0;
}