#include <stdio.h>
main()
{
	char data[] = "Language";
	char* p_data;
	char su,i;
	int Flg = 0;

	p_data = data;
	printf("data[ ] = %s\n", data);

	printf("検索文字は？");
	scanf("%c", &su);

	printf("検索結果は、");

	for (i = 0; *p_data; i++) {

			if (*p_data == su) {

				printf(" %d ", i + 1);
				Flg = 1;
			}

			*p_data++;

		}
	
	if (Flg = 1) {

		printf("文字目です");

	}
	else {
		printf("Error");
	}
}