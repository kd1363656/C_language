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

	printf("–¼‘O‚ð“ü—Í : ");
	scanf("%s", p->name);

	printf("¶”NŒŽ“ú‚ð‹æØ‚Á‚Ä“ü—Í : ");
	scanf("%d%d%d", &(p->birth[0]), //birth‚Ì‚P‚ÉŠi”[
					&(p->birth[1] ),//birth‚Ì‚Q‚ÉŠi”[
					&(p->birth[2]));//birth‚Ì‚R‚ÉŠi”[
	gets(dumy);

	printf("ŒŒ‰tŒ^‚ð‹æØ‚Á‚Ä“ü—Í");
	scanf("%s",p->blood);

	printf("%s-- %d ”N %d ŒŽ %d “ú¶ ŒŒ‰tŒ^- %sŒ^",p->name,
						p->birth[0],p->birth[1],p->birth[2],
						p->blood);

	return 0;
}