#include <stdio.h>

void minmax(int i, int j, int k, int* p_a, int* p_b);

main()
{
	int i, j, k, p_a, p_b;
	
	printf("������3���� �F ");
	scanf("%d%d%d", &i, &j, &k);

	minmax(i, j, k, &p_a, &p_b);

	printf("�ő�l = %d �ŏ��l = %d", p_a, p_b);

}

void minmax(int i,int j,int k,int *p_a, int *p_b){

	*p_a = *p_b = 0; //�������Y���ȁI�I
	

	int a[3] = { i,j,k };
	int l;  //�J�E���^�ϐ�

	for (l = 0; l < 3; l++) {

		if (*p_a < a[l]) {

			*p_a = a[l];

		}
		else{

			*p_b = a[l];

		}

	}
	
	/*�߂���ނ������
	*p_a = (i > j) ? (i > k ? i : k) : (j > k ? j : k);
	*p_b = (i < j) ? (i < k ? i : k) : (j < k ? j : k);
	*/

	/*if (*p_a < i) {

		*p_a = i;

	}
	else {

		*p_b = i;

	}

	if (*p_a < j) {

		*p_a = j;

	}
	else {

		*p_b = j;

	}

	if (*p_a < k) {

		*p_a = k;

	}
	else {

		*p_b = k;

	}*/

}