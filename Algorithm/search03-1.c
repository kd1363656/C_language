#include<stdio.h>
main() {

	int data[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int mid, low = 0, high = 11,su,i;

	printf("’Tõ’l‚ğ“ü—Í");
	scanf("%d", &su);

	for (i = 0; low <= high; i++) {

		mid = (high + low) / 2;

		if (su == data[mid])break;

		if (data[mid] < su) {

			low = mid + 1;

		}

		else {

			high = mid - 1;

		}

	}

	if (low > high) {

		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n’Tõ‰ñ”%d",i);
		

	}

	else {

		printf("’Tõ’l%d‚Í%d‰ñ‚ÅŒ©‚Â‚©‚è‚Ü‚µ‚½", su, i);

	}

}