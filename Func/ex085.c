#include <stdio.h>

//void renketu(char* moji1, char* moji2);

void Str_Cat(char *a,char*b);

main(void)
{
//	char moji1[128];
//	char moji2[128];
//
//	printf("zñ a :");
//	scanf("%s", moji1);
//	printf("zñ b :");
//	scanf("%s", moji2);
//
//	renketu(moji1,moji2);
//
//	printf("zñ a : %s",moji1);
//
//	return 0;
//}
//
//void renketu(char* moji1, char* moji2) {
//
//	int i, k;
//
//	for (i = 0; moji1[i]; i++);
//	
//	for (k = 0; moji2[k]; k++,i++) {
//
//		moji1[i] = moji2[k];
//
//	}

	char a[100], b[100];

	printf("zña : ");
	scanf("%s", a);
	printf("zñb : ");
	scanf("%s", b);

	Str_Cat(a, b);

	printf("zña : %s", a);
}

void Str_Cat(char* a, char* b) {

	int i, j;

	for (i = 0; *(a + i) : i++);

	//*(a + i) = *(b + j)Í\0ÉbÚæªAhXðãüµÄ©çð»è

	for (j = 0; *(a + i) = *(b + j); j++, i++);

	return;

}