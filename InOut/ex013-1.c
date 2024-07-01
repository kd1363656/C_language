#include <stdio.h>
main()
{
	char a = '5', b = '6';
	printf("%d*%d=%d\n",a-48,b-48,( a - 0x30) * (b - 0x30));
}