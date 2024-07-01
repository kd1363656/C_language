#include <stdio.h>
main()
{
	char* p_game[] = { "wii","ds","playstation4" };
	char** p;
	int i;

	//p_gameのアドレスを**pに代入
	
	p = p_game;

	for (i = 0; i < 3; i++) {

		while (**p) {	//wii,ds,playstationのこと

			printf("%c",**p);	//wを表示
			(*p)++; //ここが分からん
		}
		printf("\n");
		p++;	//wiiからdsに移動

	}

}