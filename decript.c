#include <stdio.h>
main()
{
	char s[31];
	int i;


	//c����Ŕz�񖼂͔z��̃A�h���X
	//�z��̐擪�A�h���X

	printf("s�����");
	scanf("%s", s);

	for (i = 0; s[i] != '\0';i++) {

		s[i]++;

	}

	printf("�Í������ꂽ�����́A%s", s);

}