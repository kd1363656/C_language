/*#include <stdio.h>
main()
{
	
	char moji1[81], moji2[81], moji3[81];
	int i;

	printf("文字列 1 を入力 : ");
	scanf("%s", &moji1[0]);

	printf("文字列 2 を入力 : " );
	scanf("%s", &moji2[0]);

	printf("moji1 = %s\tmoji2 = %s\n入れ替えると\n",&moji1[0], &moji2[0]);

	for (i = 0; moji3[i] = moji1[i]; i++);

	for (i = 0; moji1[i] = moji2[i]; i++);

	for (i = 0; moji2[i] = moji3[i]; i++);

	printf("moji1 = %s\tmoji2 = %s", &moji1[0], &moji2[0]);

}*/

#include <stdio.h>
main()
{

	char moji1[81], moji2[81], moji3[81];
	int i;

	printf("文字列 1 を入力 : ");
	scanf("%s", &moji1);

	printf("文字列 2 を入力 : ");
	scanf("%s", &moji2);

	printf("moji1 = %s\tmoji2 = %s\n入れ替えると\n", moji1, moji2);

	for (i = 0; moji3[i] = moji1[i]; i++);

	for (i = 0; moji1[i] = moji2[i]; i++);

	for (i = 0; moji2[i] = moji3[i]; i++);

	printf("moji1 = %s\tmoji2 = %s", moji1, moji2);

}