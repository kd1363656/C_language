#include <stdio.h>
main()
{
	char data[] = "Apple";
	//"Apple"�ŕ�����Ƃ���
	// �����񂾂ƕ\��\0(nul)������ɂ�
	//'A''p'p'l'e'���ƕ����萔�Ƃ��Ĕ��f�����
	//'A''p'p'l'e'\0'�Ƒł��Ȃ���nul�l���t�����Ȃ�
	int i;

	printf("�ꕶ�����\��\n");

	for (i = 0; data[i] != '\0'; i++) {

		printf("%c", data[i]);

	}

	printf("\n������ŕ\��\n");
	printf("%s\n", &data[0]);

	//printf("%s\n",data);�ł�����
	//'&'�ŃA�h���X�����

}