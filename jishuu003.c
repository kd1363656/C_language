#include <stdio.h>
main()
{
	int num, i = 0;

	printf("数を入れる");
	scanf("%d",&num);

	while (i < 11) {
		printf("%d + %d = %d\n", num, i, num + i);
		i++;
	}
	printf("やりますねぇ！！\n");
}