#include<stdio.h>
main() {


	char s[31];
	int i;

	printf("�Í������������͂��Ă�������>");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) {

		s[i]--;

	}

	printf("�����ς݂̕������%s",s);

}