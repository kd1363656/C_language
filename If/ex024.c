#include <stdio.h>
main()
{
	char moji;
	printf("文字を入力:");
	scanf("%c",  &moji);

	if (moji >= 'A' && moji <= 'Z') {
		printf("大文字です");
	}
	else {
		printf("その他の文字です\n");
	}
}