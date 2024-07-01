#include <stdio.h>
main(void)
{
	char str1[128], str2[128];
	char* p1, * p2;

	p1 = str1;
	p2 = str2;

	printf("•¶Žš—ñ1?");
	scanf("%s", str1);
	printf("•¶Žš—ñ2?");
	scanf("%s", str2);

	while (*p1++);

	p1++;
	p1 = p2;

	while (*p2++) {

	
		*p2++;
		*p1++;
	
	}

	printf("str1 : %s", str1);

	return 0;
}