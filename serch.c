#include <stdio.h>
main()
{

	int s,data[10] = {50,10,44,32,99,91,60,77,3,100}, i;

	printf("’Tõ’ls‚ğ“ü—Í");
	scanf("%d", &s);

	for (i = 0; i < 10; i++) {

		if (s == data[i]) break;

	}

	if (i >= 10) {

		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
		printf("’Tõ‰ñ”%d", i);
	}
	else {

		printf("Œ©‚Â‚©‚Á‚½\n");
		printf("’Tõ‰ñ”%d\n",i);
	}

}