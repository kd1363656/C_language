#include <stdio.h>
main()
{
	char su;

	printf("���Z�q������ : ");
	scanf("%c", &su);

	switch (su) {
	case '+':
		printf("���Z�ł�");
		break;

	case '-':
		printf("���Z�ł�");
		break;

	case '*':
		printf("��Z�ł�");
		break;

	case '/':
		printf("���Z�ł�");
		break;

	case '%':
		printf("���܂�ł�");
		break;

	default:printf("���̑��ł�");
	}
}