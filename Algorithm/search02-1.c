#include <stdio.h>
main()
{
	int i,su, data[10] = {1,2,3,4,5,6,7,8,9};

	data[10] = 10;

	printf("�T���l�������");
	scanf("%d", &su);

	for (i = 0; su != data[i]; i++);

	if(su == data[10]){
	
		printf("%d�͌�����Ȃ�����", su);
	
	}
	else {

		printf("�T���l%d�͒T����%d�Ō�������", su, i);

	}
	




}