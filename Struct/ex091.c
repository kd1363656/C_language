#include <stdio.h>

struct profile {

	char name[20];
	int birth[3];
	char blood[5];

};


main(void)
{
	struct profile pr;
	struct profile*p;
	char dumy[256];

	p = &pr;

	printf("���O����� : ");
	scanf("%s", p->name);

	printf("���N��������؂��ē��� : ");
	scanf("%d%d%d", &(p->birth[0]), //birth�̂P�Ɋi�[
					&(p->birth[1] ),//birth�̂Q�Ɋi�[
					&(p->birth[2]));//birth�̂R�Ɋi�[
	gets(dumy);

	printf("���t�^����؂��ē���");
	scanf("%s",p->blood);

	printf("%s-- %d �N %d �� %d ���� ���t�^- %s�^",p->name,
						p->birth[0],p->birth[1],p->birth[2],
						p->blood);

	return 0;
}