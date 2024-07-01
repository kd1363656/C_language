#include <stdio.h>
main()
{
	char s[31];
	int i;


	//c言語で配列名は配列のアドレス
	//配列の先頭アドレス

	printf("sを入力");
	scanf("%s", s);

	for (i = 0; s[i] != '\0';i++) {

		s[i]++;

	}

	printf("暗号化された文字は、%s", s);

}