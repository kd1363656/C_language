#include <stdio.h>
main()
{

	char c;
	char* c_p;

	c_p = &c;

	printf("1文字入力");
	scanf("%c", &c);

	printf("次の文字は%c", *c_p+1);
}