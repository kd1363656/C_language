#include <stdio.h>
main()
{
	int i;
	char data[] = "orange";

	printf("������ : %s\n", data);

	for (i = 0; data[i] != '\0'; i++);

	printf("��������%d����", i);

}