#include <stdio.h>
main()
{
	float box[3],kei = 0,hei = 0;
	int i;

	for (i = 0; i < 3; i++) {

		printf("実数を入力 : ");
		scanf("%f", &box[i]);

		kei += box[i];
		hei++;
	}

	printf("合計は%.2fです\n平均は%.2fです", kei, (float)kei / hei);
	

}