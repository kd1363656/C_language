#include <stdio.h>
main()
{
	int num, i = 0 ;
	printf("��������:");
	scanf("%d", &num);
	//i <= 10
	while (i < 11 ) {
		printf("%d+%d=%d\n",num ,i ,num + i );
		i++;
	}
}