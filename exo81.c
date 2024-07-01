#include <stdio.h>


void maxmin(int *p, int* max, int* min,int count);

main(void)
{
	int p[] = { 6,10,8,2,9,5,1,7 }, count = 7;
	int max = p[0], min = p[0];

	maxmin(p, &max, &min,count);

	printf("Å‘å’l = %d\nÅ¬’l = %d", max,min);

	return 0;
}

void maxmin(int *p,int* max, int* min, int count) {

	*max = *min = 0;

	int i;

	for (i = 0; i < count; i++) {

		if (*max < *p) {

			*max = *p;

		}
		else {

			*min = *p;

		}
		
		*p++;

	}

	return;

}