#include <stdio.h>
main()
{
	int i;
	char data[] = "Apple";

	printf("1�����Â\��\n");

	for (i = 0; data[i] != '\0'; i++) {
		printf("%c", data[i]);
	}
	printf("\n������ŕ\��\n");
	printf("%s", data);
}