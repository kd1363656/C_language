#include <stdio.h>
main()
{
	int i;
	char data[] = "Apple";

	printf("一文字ずつ表示\n");

	for (i = 0; data[i] != '\0'; i++) {

		printf("%c", data[i]);

	}

	printf("\n文字列で表示\n");
	printf("%s", data);


}