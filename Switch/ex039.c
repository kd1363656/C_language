#include <stdio.h>
main()
{
	char su;
	int num1, num2, num3, kei;

	printf("��������� : ");
	scanf("%c", &su);

	printf("��������� : ");
	scanf("%d%d%d", &num1, &num2, &num3);

	switch (su) {

	case 'D':
	case 'd':

		if (num1 >= num2 && num1 >= num2) {
			printf("�ő�l��%d�ł�", num1);

			if (num2 >= num1 && num2 >= num3){
				printf("�ő�l��%d�ł�", num2);
			}

			else {
				printf("�ő�l��%d�ł�", num3);
			}

		};

		break;

	case 'S':
	case 's':

		if (num1 <= num2 && num1 <= num2) {
			printf("�ŏ��l��%d�ł�", num1);

			if (num2 <= num1 && num2 <= num3) {
				printf("�ŏ��l��%d�ł�", num2);
			}

			else {
				printf("�ŏ��l��%d�ł�", num3);
			}

		};

		break;

	case 'G':
	case 'g':

		printf("���v��%d�ł�", num1 + num2 + num3);

		break;

	case 'h':
	case 'H':

		printf("���ς�%.2f�ł�", (float)(num1 + num2 + num3) / 3);

		break;
	}
}