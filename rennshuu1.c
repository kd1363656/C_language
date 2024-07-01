#include <stdio.h>
main()
{
	int data[][3] = { {10,20,30},{40,50,60},{70,80,90} },i;
	int* p_data;

	p_data = data[3];

	for (i = 0; i < sizeof data / sizeof(int); i++) {

		printf("%d", *p_data);
		p_data++;
		if (i = 3) {
			printf("\n");
		}

	}

}