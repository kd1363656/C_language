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

		printf("%d人目の名前",i+1);
		scanf("%s", p->name);

		printf("%d人目の生年月日",i+1);
		scanf("%d%d%d", &p->birth[0],&p->birth[1],&p->birth[2]);

		printf("%d人目の血液型", i+1);
		scanf("%s", p->blood);
		p++;
	}

	p = profile;

	for (i = 0; i < 5; i++) {

		if (strcmp(p->blood, "A") == 0) {

			printf("%s-- %d 年 %d 月 %d 日生まれ 血液型-%s型\n", 
			p->name, p->birth[0],p->birth[1], p->birth[2], 
			p->blood);

		}

		p++;

	}

	return 0;
}