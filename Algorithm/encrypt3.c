#include <stdio.h>
main()
{
	char d[20];
	int n,su,i,k[5];

	printf("���������͂��Ă���������");
	scanf("%s", &d);

	for (i = 0; i < 5; i++) {

		printf("s[%d]�̕����L�[",i);
		scanf("%d", &su);

		d[i] += su;

	}

	printf("�����ςݕ�����́A%s�ł�",d);

}