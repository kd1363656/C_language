#include <stdio.h>
main()
{
	char a;
		
	printf("文字を入力:");
	scanf("%c", &a);
	
	if (a <= 'A' && a >= 'Z'|| a >= 'a'  &&  a <= 'z') {
		printf("アルファベットだハゲ");
	}
	else {
		if (a >= '0' && a <= '9') {
			printf("数字だハゲ");
		}
		else {
			printf("他の文字だハゲ");
		}
	}
}