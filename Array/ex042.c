#include <stdio.h>
main()
{
	char data[] = "Apple";
	//"Apple"で文字列として
	// 文字列だと表示\0(nul)が勝手につく
	//'A''p'p'l'e'だと文字定数として判断される
	//'A''p'p'l'e'\0'と打たないとnul値が付くかない
	int i;

	printf("一文字ずつ表示\n");

	for (i = 0; data[i] != '\0'; i++) {

		printf("%c", data[i]);

	}

	printf("\n文字列で表示\n");
	printf("%s\n", &data[0]);

	//printf("%s\n",data);でも動く
	//'&'でアドレスを取る

}