#include <stdio.h>
main()
{
	char moji[80], mj1[80], mj2[80];
	int i;

	printf("文字列1を入力 : ");
	scanf("%s", &mj1[0]);

	printf("文字列2を入力 : ");
	scanf("%s", &mj2[0]);

	printf("moji1 = %s\t", &mj1[0]);
	printf("moji2 = %s\n", &mj2[0]);

	//ここのforは真と偽を用いて判定を行っている
	for (i = 0; moji[i] = mj1[i]; i++);

	for (i = 0; mj1[i] = mj2[i]; i++);

	for (i = 0; mj2[i] = moji[i]; i++); 
	

	printf("入れ替えると\n");
	printf("moji1 = %s\t",  mj1);
	printf("moji2 = %s",  mj2);
}