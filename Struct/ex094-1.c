#include <stdio.h>
//生年月日
struct day {

	int nen;
	int tuki;
	int hi;

};

struct profile_data {

	char name[20];//名前
	struct day birth;
	char blood[5];//血液
};


main(void)
{
	struct profile_data student[5] = {
		{ "アーサー",     {2000,1,1}, "A"},
		{ "ルシファー",   {2001,2,2}, "B" },
		{ "クシナダ",     {2002,2,3}, "O" },
		{ "ネオ",         {2003,2,4}, "AB" },
		{ "マサムネ",     {2004,2,5}, "A"},
	};

	struct profile_data* p;
	int i;

	//pに先頭アドレスを格納
	p = student;

	//２月生まれの人のデータ
	 for (i = 0; i < 5; i++) {

		 if (p->birth.tuki == 2) {

				printf("%s-- %d 年 %d 月 %d 日生まれ 血液型-%s型\n",
					p->name,
					p->birth.nen , p->birth.tuki ,p->birth.hi,
					p->blood);

			}
		 p++;//次のデータへ
	 }

	return 0;
}