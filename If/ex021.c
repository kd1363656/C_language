#include <stdio.h>
main()
{
	float a;
	printf("���������:");
	scanf("%f", &a);
	if (a >= 100.0) {
		printf("���͒la��100�ȏ�ł�\n");
	}
	else if(a > 0 ){
		printf("���͒la�̓v���X�ł�\n");
	}
	else {
		printf("���͒l�͕������ł�\n");
	}
	return 0;
}