#include <stdio.h>
//���N����
struct day {

	int nen;
	int tuki;
	int hi;

};

struct profile_data {

	char name[20];//���O
	struct day birth;
	char blood[5];//���t
};


main(void)
{
	struct profile_data student[5] = {
		{ "�A�[�T�[",     {2000,1,1}, "A"},
		{ "���V�t�@�[",   {2001,2,2}, "B" },
		{ "�N�V�i�_",     {2002,2,3}, "O" },
		{ "�l�I",         {2003,2,4}, "AB" },
		{ "�}�T���l",     {2004,2,5}, "A"},
	};

	struct profile_data* p;
	int i;

	//p�ɐ擪�A�h���X���i�[
	p = student;

	//�Q�����܂�̐l�̃f�[�^
	 for (i = 0; i < 5; i++) {

		 if (p->birth.tuki == 2) {

				printf("%s-- %d �N %d �� %d �����܂� ���t�^-%s�^\n",
					p->name,
					p->birth.nen , p->birth.tuki ,p->birth.hi,
					p->blood);

			}
		 p++;//���̃f�[�^��
	 }

	return 0;
}