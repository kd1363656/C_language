#include <stdio.h>
main()
{
	char str1[128],* p_str1;
	char str2[128],* p_str2;
	char str3[128],* p_str3;

	p_str3 = str3;
	
	printf("•¶Žš—ñ1");
	scanf("%s", &str1);
	printf("•¶Žš—ñ2");
	scanf("%s", &str2);

	p_str1 = str1;
	p_str2 = str2;


	while (*p_str1++) {



	}

	printf("%s", p_str3);

	//while (*p_str2) {

	//	*p_str3++ = *p_str2++;

	//}

	


}