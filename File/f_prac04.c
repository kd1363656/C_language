#include <stdio.h>
#define Sol_Num 3  //隊員の数

typedef struct
{

	char   Wname[20];
	int    bullet;
	float  atk;

}Weapon;

typedef struct {

	char name[20];
	int  hp;
	Weapon wpn;

}Soldier;

void SetInfo(Soldier* s, char* filename); //rモードで読み取り！！
void Display(Soldier* s);

int main(void)
{

	Soldier sols[Sol_Num];

	SetInfo(sols, "file07.txt");
	Display(sols);

	return 0;
}

void SetInfo(Soldier* s, char* filename) {

	int i;

		FILE* fp = NULL;
		fp = fopen(filename, "r");

	for (i = 0; i < Sol_Num; i++) {

		fscanf(fp, "%s %d %s %d %f", (s + i)->name, &(s + i)->hp,
			(s + i)->wpn.Wname, &(s + i)->wpn.bullet, &(s + i)->wpn.atk);

	}

		fclose(fp);

}

void Display(Soldier *s) {

	int i;

	for (i = 0; i < Sol_Num; i++) {

		printf("名前：%s 体力：%d\n武器名：%s 残段数：%d 攻撃力：%.2f\n", (s + i)->name, (s + i)->hp,
			(s + i)->wpn.Wname, (s + i)->wpn.bullet, (s + i)->wpn.atk);

	}

}