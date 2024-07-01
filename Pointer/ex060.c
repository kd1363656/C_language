#include <stdio.h>
main()
{
	char data[] = "Language";
	char* p_data;
	char su,i;
	int Flg = 0;

	p_data = data;
	printf("data[ ] = %s\n", data);

	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c", &su);

	printf("ŒŸõŒ‹‰Ê‚ÍA");

	for (i = 0; *p_data; i++) {

			if (*p_data == su) {

				printf(" %d ", i + 1);
				Flg = 1;
			}

			*p_data++;

		}
	
	if (Flg = 1) {

		printf("•¶š–Ú‚Å‚·");

	}
	else {
		printf("Error");
	}
}