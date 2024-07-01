#include <stdio.h>
main()
{
	char* p_ride[] = { "car","bus","shinkansen" };

	int i;

	for (i = 0; i < 3; i++) {

			printf("%s",p_ride[i]);
			printf("\n");
	}
	
}