#include <stdio.h>
main()
{
	int i;
	char moji[] = "orange";

	for (i = 0; moji[i] != '\0';i++);

	printf("文字列 : %s\n",moji);
	printf("文字数は%d文字です", i);
}