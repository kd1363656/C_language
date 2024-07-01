#include <stdio.h>
main()
{
	int num, count;

	printf("”‚ğ“ü‚ê‚Ä : ");
	scanf("%d", &num);

	for (count = 1; count <= 5; count++) {
		printf("%d ", num * count);
	}
}