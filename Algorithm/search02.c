#include<stdio.h>
main() {

	int su, i;
	int data[11] = { 10,20,30,40,50,60,70,80,90,100};

	printf("�T���l�����");
	scanf("%d", &su);

	//�����Ŏd���񂾔ԕ������ɗ���

	for (data[10] = su, i = 0; su != data[i]; i++);

	if (su == data[10]) {

		printf("������Ȃ�����");
		printf("�T���񐔁@%d", i);
	}
	else {

		printf("��������\n");
		printf("�T����%d�ŒT���l%d�𔭌�\n", i,su);

	}

	//���j�A�T�[�`�@������������
	//�ԕ��@�@�����������ǂ�



}