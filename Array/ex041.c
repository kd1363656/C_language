#include <stdio.h>
main()
{
	int  con = 0;
	float box[3], kei = 0;

	for (int i = 0; i < 3; i++) {

		printf("��������� : ");
		scanf("%f", &box[i]);

		kei += box[i];
		con++;

	}

	printf("���v��%.2f�ł�\n", kei);
	printf("���ς�%.2f�ł�\n", kei / con);


}