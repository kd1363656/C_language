#include<stdio.h>
main() {

	int low = 0;
	int high = 10;
	int mid;
	int s;
	int i;

	int d[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("�T���ls�����");
	scanf("%d", &s);

	for (i = 0; low < high; i++) {

		mid = (high + low) / 2;

		if (s == d[mid])break;

		if (s > d[mid]) {

			low = mid + 1;

		}

		else{

			high = mid - 1;

		}

	}

	if (low > high) {

		printf("������Ȃ�����\n�T���� %d",i);

	}
	else {

		printf("�T���l%d�͌�������\n�T���� %d",s,i);

	}








}