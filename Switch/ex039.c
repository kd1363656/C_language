#include <stdio.h>
main()
{
	char su;
	int num1, num2, num3, kei;

	printf("処理を入力 : ");
	scanf("%c", &su);

	printf("整数を入力 : ");
	scanf("%d%d%d", &num1, &num2, &num3);

	switch (su) {

	case 'D':
	case 'd':

		if (num1 >= num2 && num1 >= num2) {
			printf("最大値は%dです", num1);

			if (num2 >= num1 && num2 >= num3){
				printf("最大値は%dです", num2);
			}

			else {
				printf("最大値は%dです", num3);
			}

		};

		break;

	case 'S':
	case 's':

		if (num1 <= num2 && num1 <= num2) {
			printf("最小値は%dです", num1);

			if (num2 <= num1 && num2 <= num3) {
				printf("最小値は%dです", num2);
			}

			else {
				printf("最小値は%dです", num3);
			}

		};

		break;

	case 'G':
	case 'g':

		printf("合計は%dです", num1 + num2 + num3);

		break;

	case 'h':
	case 'H':

		printf("平均は%.2fです", (float)(num1 + num2 + num3) / 3);

		break;
	}
}