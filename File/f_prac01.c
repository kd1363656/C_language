#include <stdio.h>
main(void)
{
	int score = 0;
	char ch;
	char name[20];
	FILE* fp;

	printf("���O�����");
	scanf("%s", name);
	while (1) {

		printf("���݂̃X�R�A:%d('e'�ŏI��)\n", score);

		ch = getch();

		if (ch == 'e') break;

		score++;

	}

	fp = fopen("f_prac02.txt", "w");

	fprintf(fp, "%s\n%d\n", name,score);

	fclose(fp);

	return 0;
}