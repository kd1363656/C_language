#include<stdio.h>

main() {

	char moji;

	printf("'0'�`'9�܂ł̐��������");
	scanf("%c", &moji);

	if (moji >= '0' && moji <= '9') {

		int suu;

		suu = moji - '0';

		printf("���͂��ꂽ�����������_�ŕ\����%f", (float)suu);



	}

}