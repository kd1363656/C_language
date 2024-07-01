#include <stdio.h>
main()
{
	int c;//charでも行けるなんで？

	while ((c = getchar()) != EOF) {	//getcharは位置もじ読み込む
		
		//改行も文字として受け取り実行
		//カッコがないとバグる

		putchar(c);

	}

}