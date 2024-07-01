#include <stdio.h>
#include<stdlib.h>

struct profile_data {

	char name1[20];
	int birth1[3];
	char blood1[5];
};

main(void)
{
	struct profile_data profile;

	//profileは構造体の名前

	char dumy[256]; //キャッシュの削除

	printf("名前を入力 : ");
	scanf("%s",profile.name1);

	printf("生年月日を空白で区切って入力 : ");

	scanf("%d%d%d", &profile.birth1[0],&profile.birth1[1],&profile.birth1[2]);
	//配列一つ一つにデータを格納

	gets(dumy);
	//キャッシュのクリア

	printf("血液型を入力 : ");
	scanf("%s",profile.blood1);


	printf("%s--%d 年 %d 月 %d 日生 血液型-  %s型", profile.name1, profile.birth1[0],
	profile.birth1[1], profile.birth1[2], profile.blood1);

	return 0;
}