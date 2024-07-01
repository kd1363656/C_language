#include <stdio.h>
main(void)
{
	char* day[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday",
	"Saturday",NULL};
	char** p_day;

	int i, k;

	p_day = day;

	for (i = 0; i < 7; i++) {

		while (**p_day) {

			printf("%c", **p_day);
			(*p_day)++;
		}
		printf("\n");
		p_day++;
	}

	return 0;
}