#include<stdio.h>
main()
{
	int num ,gk = 0;

	while(1)
	{

		printf("数を入れて :");
		scanf("%d", & num);

		if (num == -999) break;

		gk += num;
	}
	printf("合計  = %d", goukei);
}