#include <stdio.h>
main(void)
{

	int data[] = {10, 5, 30, 77, 16, 3, 47, 29, 37, 33};
	int i,su;

	printf("探している数字は?");
	scanf("%d", &su);

	for (i = 0; i < 10; i++) {

		if (data[i] == su)break;

	}

	if (i > 9) {

		printf("見つかりませんでした");

	}
	else {

		printf("\nお探しの数字は%d\n探索回数は%dです",su,i + 1);

	}

	return 0;
}