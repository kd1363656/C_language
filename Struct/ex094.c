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

		printf("%dl–Ú‚Ì–¼‘O",i+1);
		scanf("%s", p->name);

		printf("%dl–Ú‚Ì¶”NŒŽ“ú",i+1);
		scanf("%d%d%d", &p->birth[0],&p->birth[1],&p->birth[2]);

		printf("%dl–Ú‚ÌŒŒ‰tŒ^", i+1);
		scanf("%s", p->blood);
		p++;
	}

	p = profile;

	for (i = 0; i < 5; i++) {

		if (strcmp(p->blood, "A") == 0) {

			printf("%s-- %d ”N %d ŒŽ %d “ú¶‚Ü‚ê ŒŒ‰tŒ^-%sŒ^\n", 
			p->name, p->birth[0],p->birth[1], p->birth[2], 
			p->blood);

		}

		p++;

	}

	return 0;
}