#include <stdio.h>
main()
{
	char moji[80], mj1[80], mj2[80];
	int i;

	printf("������1����� : ");
	scanf("%s", &mj1[0]);

	printf("������2����� : ");
	scanf("%s", &mj2[0]);

	printf("moji1 = %s\t", &mj1[0]);
	printf("moji2 = %s\n", &mj2[0]);

	//������for�͐^�ƋU��p���Ĕ�����s���Ă���
	for (i = 0; moji[i] = mj1[i]; i++);

	for (i = 0; mj1[i] = mj2[i]; i++);

	for (i = 0; mj2[i] = moji[i]; i++); 
	

	printf("����ւ����\n");
	printf("moji1 = %s\t",  mj1);
	printf("moji2 = %s",  mj2);
}