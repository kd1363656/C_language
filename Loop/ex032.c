#include <stdio.h>
main()
{
	int num, count;

	printf("数を入れて : ");
	scanf("%d", &num);

	for (count = 1; count <= 5; count++) {
		printf("%d ", num * count);
	}
}