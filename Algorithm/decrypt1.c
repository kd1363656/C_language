#include<stdio.h>
main() {


	char s[31];
	int i;

	printf("暗号化文字列を入力してください>");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) {

		s[i]--;

	}

	printf("複合済みの文字列は%s",s);

}