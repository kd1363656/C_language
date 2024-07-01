#include <stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" },*pc;
	int i;

	for (i = 0; i < 3; i++) {

		//ポインタ*pcにcar,bus,shinkansenのアドレス	を代入
		pc = p_ride[i];

		while (*pc) {
			//*pcが'\0'になるまでループ

			printf("%c", *pc++);
			//pcのアドレスの中身を表示

		}
		printf("\n");

	}

}