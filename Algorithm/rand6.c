#include <stdio.h>
#include<stdlib.h>
#include<time.h>


main()
{
	/*int ram, su;


	srand(time(0));



		rand();

		ram = rand() % 4 + 1;

		printf("�����o���܂����H\n(1�F�O�[ 2�F�`���L 3�F�p�[) �� ");
		scanf("%c", &su);

		su--;

		printf("�v���C���[��%c�ł��Asu");

*/

	int ram, su;

	printf("�����o���܂����H\n(1�F�O�[ 2�F�`���L 3�F�p�[) �� ");
	scanf("%d", &su);

	su--;

	if (su == 0) { printf("�v���C���[�̓O�[�ł�\n"); };
	if (su == 1) { printf("�v���C���[�̓`���L�ł�\n"); };
	if (su == 2) { printf("�v���C���[�̓p�[�ł�\n"); };

	srand(time(0));

	rand();

	ram = rand() % 3;

	if (ram == 0) { printf("�R���s���[�^�̓O�[�ł�\n"); };
	if (ram == 1) { printf("�R���s���[�^�̓`���L�ł�\n"); };
	if (ram == 2) { printf("�R���s���[�^�̓p�[�ł�\n"); };

	if (ram == su) {
		printf("�������ł�");
	}

	

		if (su == 0) {

			if (ram == 1)printf("�v���C���[�̏����ł�");
			if (ram == 2)printf("CPU�̏����ł�");

		}

		if (su == 1) {

			if (ram == 2)printf("�v���C���[�̏����ł�");
			if (ram == 0)printf("CPU�̏����ł�");

		}

		if (su == 2) {

			if (ram == 0)printf("�v���C���[�̏����ł�");
			if (ram == 1)printf("CPU�̏����ł�");

		}

}