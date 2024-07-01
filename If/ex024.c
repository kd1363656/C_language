#include <stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c",  &moji);

	if (moji >= 'A' && moji <= 'Z') {
		printf("‘å•¶Žš‚Å‚·");
	}
	else {
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·\n");
	}
}