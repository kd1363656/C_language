#include <stdio.h>
main(void)
{
	int data[11] = { 10,5,30,77,16,3,47,29,37,33 };
	int i, su;

	data[10] = -999;

	printf("’T‚µ‚½‚¢”š");
	scanf("%d", &su);

	for (i = 0; su != data[i]; i++);

	if (i >= 10) {

		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n’Tõ‰ñ”%d",i);

	}

	else {

		printf("’Tõ‚µ‚½”š‚Í%d‚Å‚·\n’Tõ‰ñ”%d", data[i], i + 1);

	}


	return 0;
}