#include <stdio.h>
main()
{
	char su;

	printf("演算子を入れて : ");
	scanf("%c", &su);

	switch (su) {
	case '+':
		printf("加算です");
		break;

	case '-':
		printf("減算です");
		break;

	case '*':
		printf("乗算です");
		break;

	case '/':
		printf("除算です");
		break;

	case '%':
		printf("あまりです");
		break;

	default:printf("その他です");
	}
}