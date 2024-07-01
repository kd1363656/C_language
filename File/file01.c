#include <stdio.h>
main(void)
{
	FILE* fp;
	int a = 10, b = 20;
	fp = fopen("file01.txt", "w");
	fprintf(fp, "KOBDENSHI\n");
	fprintf(fp, "%d + %d = %d\n", a, b, a + b);
	fclose(fp);

	return 0;
}