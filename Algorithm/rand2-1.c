#include <stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int hen;

	srand(time(0));	//乱数を初期化（シャッフルする）する

	rand();

	hen = rand() % 100;	 //0-5で始まる

	printf("変数はは%dです\n", hen);

}