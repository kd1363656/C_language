#include <stdio.h>
main()
{
	int  con = 0;
	float box[3], kei = 0;

	for (int i = 0; i < 3; i++) {

		printf("ŽÀ”‚ð“ü—Í : ");
		scanf("%f", &box[i]);

		kei += box[i];
		con++;

	}

	printf("‡Œv‚Í%.2f‚Å‚·\n", kei);
	printf("•½‹Ï‚Í%.2f‚Å‚·\n", kei / con);


}