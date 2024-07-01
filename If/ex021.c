#include <stdio.h>
main()
{
	float a;
	printf("整数を入力:");
	scanf("%f", &a);
	if (a >= 100.0) {
		printf("入力値aは100以上です\n");
	}
	else if(a > 0 ){
		printf("入力値aはプラスです\n");
	}
	else {
		printf("入力値は負け犬です\n");
	}
	return 0;
}