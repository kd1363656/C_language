#include <stdio.h>
main(void)
{

	int data[] = {10, 5, 30, 77, 16, 3, 47, 29, 37, 33};
	int i,su;

	printf("’T‚µ‚Ä‚¢‚é”š‚Í?");
	scanf("%d", &su);

	for (i = 0; i < 10; i++) {

		if (data[i] == su)break;

	}

	if (i > 9) {

		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½");

	}
	else {

		printf("\n‚¨’T‚µ‚Ì”š‚Í%d\n’Tõ‰ñ”‚Í%d‚Å‚·",su,i + 1);

	}

	return 0;
}