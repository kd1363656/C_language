#include <stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" },*pc;
	int i;

	for (i = 0; i < 3; i++) {

		//�|�C���^*pc��car,bus,shinkansen�̃A�h���X	����
		pc = p_ride[i];

		while (*pc) {
			//*pc��'\0'�ɂȂ�܂Ń��[�v

			printf("%c", *pc++);
			//pc�̃A�h���X�̒��g��\��

		}
		printf("\n");

	}

}