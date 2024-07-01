#include <stdio.h>
main()
{
	int a;

	printf("Œ‚ğ“ü—Í‚·‚é :");
	scanf("%d", &a);

	if (a == 2) {
		printf("ÅI“ú‚Í28“ú‚Å‚·");
	}
	else {
		if (a == 4 || a == 6 || a == 9 || a == 11) {
			printf("ÅI“ú‚Í30“ú‚Å‚·\n");
		}
		else {
			printf("ÅI“ú‚Í31“ú‚Å‚·\n");
		}
	}
}