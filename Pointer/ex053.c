#include <stdio.h>
main()
{
	int a = 100, b = 200, w = 0;
	int* pa, * pb,*pw;

	pa = &a;
	pb = &b;
	pw = &w;

	printf("���s�O�Fa = %d\tb = %d\n", *pa, *pb);
	printf("���s�O�̃A�h���X�Fa = %d\tb = %d\n", &pa, &pb);

	/**pw = *pa;
	*pa = *pb;
	*pb = *pw;*/
	pa = &b;
	pb = &a;


	printf("���s��Fa = %d\tb = %d\n", *pa, *pb);
	printf("&a = %d\t&b = %d\tw = %d\n", &a, &b, &w);
	printf("&pa = %d\t&pb = %d\t&pw = %d\n", pa, pb,pw);

}