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

	//profile�͍\���̖̂��O

	char dumy[256]; //�L���b�V���̍폜

	printf("���O����� : ");
	scanf("%s",profile.name1);

	printf("���N�������󔒂ŋ�؂��ē��� : ");

	scanf("%d%d%d", &profile.birth1[0],&profile.birth1[1],&profile.birth1[2]);
	//�z����Ƀf�[�^���i�[

	gets(dumy);
	//�L���b�V���̃N���A

	printf("���t�^����� : ");
	scanf("%s",profile.blood1);


	printf("%s--%d �N %d �� %d ���� ���t�^-  %s�^", profile.name1, profile.birth1[0],
	profile.birth1[1], profile.birth1[2], profile.blood1);

	return 0;
}