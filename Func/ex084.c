#include <stdio.h>

void gyakuhyouji(char* str,char *str_reverse);

main(void)
{
	char str1[256];
	char str2[256];

	printf("•¶Žš—ñ? : ");
	gets(str1);

	printf("str1 = %s\n", str1);

	gyakuhyouji(str1,str2);

	return 0;
}

void gyakuhyouji(char* str, char *str_reverse) {

	int i,k;

	printf("str2 = ");

	for (i = 0; *str++; i++);
	
	*str--;

	for (k = 0; k <= i; k++) {

		*str_reverse = *str;
		printf("%c", *str_reverse);
		*str_reverse++;
		*str--;


	}

}