#include <stdio.h>
main()
{
	float box[3],kei = 0,hei = 0;
	int i;

	for (i = 0; i < 3; i++) {

		printf("��������� : ");
		scanf("%f", &box[i]);

		kei += box[i];
		hei++;
	}

	printf("���v��%.2f�ł�\n���ς�%.2f�ł�", kei, (float)kei / hei);
	

}