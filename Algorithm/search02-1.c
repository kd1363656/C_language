#include <stdio.h>
main()
{
	int i,su, data[10] = {1,2,3,4,5,6,7,8,9};

	data[10] = 10;

	printf("探索値ｓを入力");
	scanf("%d", &su);

	for (i = 0; su != data[i]; i++);

	if(su == data[10]){
	
		printf("%dは見つからなかった", su);
	
	}
	else {

		printf("探索値%dは探索回数%dで見つかった", su, i);

	}
	




}