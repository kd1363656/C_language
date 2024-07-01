#include<stdio.h>
main() {

	int low = 0;
	int high = 10;
	int mid;
	int s;
	int i;

	int d[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("’Tõ’ls‚ğ“ü—Í");
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

		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n’Tõ‰ñ” %d",i);

	}
	else {

		printf("’Tõ’l%d‚ÍŒ©‚Â‚©‚Á‚½\n’Tõ‰ñ” %d",s,i);

	}








}