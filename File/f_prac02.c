#include <stdio.h>
main(void)
{
	int score = 0;
	int max_score;
	char ch;
	char name[20];
	char max_name[20];
	FILE* fp;

	fp = fopen("f_prac02.txt", "r");

	fscanf(fp, "%s%d", max_name, &max_score);

	fclose(fp);

	printf("名前を入力");
	scanf("%s", name);
	while (1) {

		printf("現在のスコア:%d('e'で終了)\n", score);

		ch = getch();

		if (ch == 'e') break;

		score++;

	}

	if (max_score < score) {
		fp = fopen("f_prac02.txt", "w");
		max_score = score;
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
		printf("ハイスコア更新\n");
	}

	return 0;
}