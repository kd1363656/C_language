#include <stdio.h>
main()
{

	int s,data[10] = {50,10,44,32,99,91,60,77,3,100}, i;

	printf("探索値sを入力");
	scanf("%d", &s);

	for (i = 0; i < 10; i++) {

		if (s == data[i]) break;

	}

	if (i >= 10) {

		printf("見つからなかった\n");
		printf("探索回数%d", i);
	}
	else {

		printf("見つかった\n");
		printf("探索回数%d\n",i);
	}

}