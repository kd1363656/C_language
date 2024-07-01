#include <stdio.h>
main(void)
{
	int score = 0;
	char ch;
	char name[20];
	FILE* fp;

	printf("名前を入力");
	scanf("%s", name);
	while (1) {

		printf("現在のスコア:%d('e'で終了)\n", score);

		ch = getch();

		if (ch == 'e') break;

		score++;

	}

	fp = fopen("f_prac02.txt", "w");

	fprintf(fp, "%s\n%d\n", name,score);

	fclose(fp);

	return 0;
}