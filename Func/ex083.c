#include <stdio.h>

int strcnt(char* p);

main(void)
{
	char buf[256];
	int mojisu;
	printf("������?: ");
	gets(buf);
	mojisu = strcnt(buf);
	printf("���͂��ꂽ������̕�������%d�����ł��B\n",mojisu);

	return 0;
}

int strcnt(char* p) {

	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return(cnt);

}