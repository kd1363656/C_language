#include <stdio.h>
main()
{
	char d[20];
	int n,su,i,k[5];

	printf("文字列を入力してください＞");
	scanf("%s", &d);

	for (i = 0; i < 5; i++) {

		printf("s[%d]の複合キー",i);
		scanf("%d", &su);

		d[i] += su;

	}

	printf("復号済み文字列は、%sです",d);

}