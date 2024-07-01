#include <stdio.h>
#include<stdlib.h>	//乱数を使うときに必要です
#include<time.h>	//乱数を使うときに必要です


main()
{
	int dice;

	srand(time(0));	//乱数を初期化（シャッフルする）する

	rand();

	dice = rand()%6+1;	 //0-5で始まる

	printf("サイコロはは%dです\n", dice);

}