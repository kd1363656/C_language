#include <stdio.h>
main()
{
	int a,b,c,ret;
	
	printf("3�̐�������؂��ē���");
	ret = scanf("%d%d%d", &a, &b, &c);
	printf("ret = %d a = %d b = %d c = %d\n",ret,a,b,c);
	printf("��������́ictrl + z�ŏI��a:�j");
	while (scanf("%d", &a) != EOF) {//scanf�̖߂�l��1
		
		//�֐��͌p���������Ŏg����

		//ctlr + z ��2�`�R�����

		printf("a = %d\n", a);
		printf("��������́ictrl + z�ŏI���ja:");
	}

}