#include <stdio.h>

//�v���g�^�C�v�錾
int goukei(int, int, int);
float heikinn(float,float);

main()
{
	int a,b,c;
	int sum;
	float hei,d = 3;

	printf("�������R����");
	scanf("%d%d%d", &a,&b,&c);

	sum = goukei(a, b, c);
	hei = heikinn((float)sum,d);

	printf("���v�� %d ���ς� %.2f", sum, hei);




}

int goukei(int x, int y, int z) {

	int sum = x + y + z;//return a + b + c�ł��ł���
	return sum;  
	//�֐�goukei�����s����sum�ɑ�����Ă���
	//�֐�heikinn�����s
}

float heikinn(float sum,float b) {

	float hei = (float)sum / b;
	return hei;

}