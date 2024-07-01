#include <stdio.h>
main()
{
	char str[256];

	//連続１行入力の定石パターン
	while (gets(str) != NULL) {

		puts(str);	//putsは自動的に改行
	}

	//実行時ワーニングが出るが問題ない

}