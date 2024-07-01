#include <stdio.h>

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

void SetInfo(Soldier* s, char* filename); //r���[�h�œǂݎ��I�I
void Display(Soldier s);

int main(void)
{

	Soldier sol;

	SetInfo(&sol,"file06.txt");
	Display(sol);	

	return 0;
}

void SetInfo(Soldier* s, char* filename) {

	FILE* fp = NULL;
	fp = fopen(filename, "r");

	fscanf(fp, "%s %d %s %d %f", s->name, &s->hp,
								 s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);


	fclose(fp);

}

void Display(Soldier s) {

	printf("���O�F%s �̗́F%d ���햼�F%s �c�i���F%d �U���́F%.2f", s.name, s.hp,
		                     s.wpn.Wname, s.wpn.bullet, s.wpn.atk);

}