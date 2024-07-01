#include <stdio.h>
main()
{

	char* p = "peach";
	char data1[10] = "banana", * p_data1;
	char data2[10], * p_data2;
	int i;

	p_data1 = data1;
	p_data2 = data2;

	//printf("data1[ ] = ");

	//for (i = 0; i < 14; i++) {

	//	if (i == 6) {

	//		printf("\ndata2[ ] = ");

	//		p_data2 = data2;


	//	}

	//	*p_data2 = *p_data1;
	//	*p_data1 = *p;

	//	printf("%c", *p_data1);
	//	
	//	p_data1++;
	//	p_data2++;
	//	p++;
	//}

	/*for (i = 0; *p_data1; i++) {

		*p_data2 = *p_data1;
		putchar(*p_data2);
		p_data2++;
		p_data1++;

	}

	printf("\ndata2[ ] = ");

	for (i = 0; *p; i++) {

		*p_data1 = *p;
		putchar(*p);
		p++;
		p_data1++;

	}*/

	while (*p_data2++ = *p_data1++);

	p_data1 = data1;

	while (*p_data1++ = *p++);

	printf("data1[ ] = %s\n", data1);
	printf("data2[ ] = %s\n", data2);

}