#include <stdio.h>
main()
{
	int  con = 0;
	float box[3], kei = 0;

	for (int i = 0; i < 3; i++) {

		printf("実数を入力 : ");
		scanf("%f", &box[i]);

		kei += box[i];
		con++;

	}

	printf("合計は%.2fです\n", kei);
	printf("平均は%.2fです\n", kei / con);


}