#include <stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int num,su = 0,i = 0;

	srand(time(0));

	rand();

	num = rand() % 1000 + 1;

	while (1) {

		printf("“–‚½‚è‚Ì”‚ÍH->");
		scanf("%d", &su);

		if (su < num) {
			printf("“–‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·");
		}

		if (su > num) {
			printf("“–‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·");
		}

		i++;

		if (su == num)break;

	}

	printf("³‰ğ%d‰ñ‚Å“–‚½‚è‚Ü‚µ‚½", i);

}