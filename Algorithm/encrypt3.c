#include <stdio.h>
main()
{
	char d[20];
	int n,su,i,k[5];

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &d);

	for (i = 0; i < 5; i++) {

		printf("s[%d]‚Ì•¡‡ƒL[",i);
		scanf("%d", &su);

		d[i] += su;

	}

	printf("•œ†Ï‚İ•¶š—ñ‚ÍA%s‚Å‚·",d);

}