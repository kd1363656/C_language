#include <stdio.h>
#include<string.h>

struct profile_data {

	char name[20];
	int  birth[3];
	char blood[5];
};

main(void)
{
	struct profile_data profile[5];
	struct profile_data *p;
	int i;
	char dumy[256];

	p = profile;

	for (i = 0; i < 5; i++) {

		printf("%d�l�ڂ̖��O",i+1);
		scanf("%s", p->name);

		printf("%d�l�ڂ̐��N����",i+1);
		scanf("%d%d%d", &p->birth[0],&p->birth[1],&p->birth[2]);

		printf("%d�l�ڂ̌��t�^", i+1);
		scanf("%s", p->blood);
		p++;
	}

	p = profile;

	for (i = 0; i < 5; i++) {

		if (strcmp(p->blood, "A") == 0) {

			printf("%s-- %d �N %d �� %d �����܂� ���t�^-%s�^\n", 
			p->name, p->birth[0],p->birth[1], p->birth[2], 
			p->blood);

		}

		p++;

	}

	return 0;
}