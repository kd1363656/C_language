#include <stdio.h>
#include<stdlib.h>
#include<time.h>


main()
{
	/*int ram, su;


	srand(time(0));



		rand();

		ram = rand() % 4 + 1;

		printf("何を出しますか？\n(1：グー 2：チョキ 3：パー) ＞ ");
		scanf("%c", &su);

		su--;

		printf("プレイヤーは%cです、su");

*/

	int ram, su;

	printf("何を出しますか？\n(1：グー 2：チョキ 3：パー) ＞ ");
	scanf("%d", &su);

	su--;

	if (su == 0) { printf("プレイヤーはグーです\n"); };
	if (su == 1) { printf("プレイヤーはチョキです\n"); };
	if (su == 2) { printf("プレイヤーはパーです\n"); };

	srand(time(0));

	rand();

	ram = rand() % 3;

	if (ram == 0) { printf("コンピュータはグーです\n"); };
	if (ram == 1) { printf("コンピュータはチョキです\n"); };
	if (ram == 2) { printf("コンピュータはパーです\n"); };

	if (ram == su) {
		printf("あいこです");
	}

	

		if (su == 0) {

			if (ram == 1)printf("プレイヤーの勝ちです");
			if (ram == 2)printf("CPUの勝ちです");

		}

		if (su == 1) {

			if (ram == 2)printf("プレイヤーの勝ちです");
			if (ram == 0)printf("CPUの勝ちです");

		}

		if (su == 2) {

			if (ram == 0)printf("プレイヤーの勝ちです");
			if (ram == 1)printf("CPUの勝ちです");

		}

}