#include <stdio.h>
main()
{

	char moji[80], moji1[80], moji2[80] ;
	int i;

	printf("������1����� : ");
	scanf("%s", &moji1[0]);

	printf("������2����� : ");
	scanf("%s", &moji2[0]);

	printf("moji1 = %s\t", moji1);
	printf("moji2 = %s\n", moji2);

	printf("����ւ����\n");

	for (i = 0; moji[i] = moji1[i]; i++);

	for (i = 0; moji1[i] = moji2[i]; i++);

	for (i = 0; moji2[i] = moji[i]; i++);

	printf("moji1 = %s\t", moji1);
	printf("moji2 = %s", moji2);





}