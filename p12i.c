#include <stdio.h>
main()
{
	/*char moji1[],*/ char* p_moji1 = "mikan";
	char moji2[20], * p_moji2;

	p_moji2 = p_moji1;

	printf("�R�s�[��̕�����@���@");

	while(*p_moji2) {

		putchar(*p_moji2++);
		p_moji1++;
	}





}