#include <stdio.h>
main()
{
	float box[3],kei = 0,hei = 0;
	int i;

	for (i = 0; i < 3; i++) {

		printf("ŽÀ”‚ð“ü—Í : ");
		scanf("%f", &box[i]);

		kei += box[i];
		hei++;
	}

	printf("‡Œv‚Í%.2f‚Å‚·\n•½‹Ï‚Í%.2f‚Å‚·", kei, (float)kei / hei);
	

}