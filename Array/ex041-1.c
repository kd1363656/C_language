#include <stdio.h>
main()
{

	float box[3] ,kei = 0, hei = 0;
	int i;


	for (i = 0; i < 3; i++) {
		printf("���������");
		scanf("%f", &box[i]);
		kei += box[i];
		hei++;
	}
	printf("���v��%5.2f�ł�",kei);
	printf("���ς�%.2f�ł�", kei / hei);

}