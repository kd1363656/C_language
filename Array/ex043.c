#include <stdio.h>
main()
{
	char box[] = "orange";//文字列の長さは6
	int i;

	for (i = 0; box[i] != '\0'; i++);//←
	//空文
	//文字列のアドレス7はNULL値なのでループから抜ける
	//アドレスからとってきているので0でも可能
	
	printf("文字列 : %s\n", box);//&box[0]ではなくboxだけでも可能
	printf("文字数は%dです", i);

}