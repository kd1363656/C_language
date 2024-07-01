#include <stdio.h>
main()
{
	int a,b,c,ret;
	
	printf("3つの整数を区切って入力");
	ret = scanf("%d%d%d", &a, &b, &c);
	printf("ret = %d a = %d b = %d c = %d\n",ret,a,b,c);
	printf("整数を入力（ctrl + zで終了a:）");
	while (scanf("%d", &a) != EOF) {//scanfの戻り値は1
		
		//関数は継続条件式で使える

		//ctlr + z を2～３回入力

		printf("a = %d\n", a);
		printf("整数を入力（ctrl + zで終了）a:");
	}

}