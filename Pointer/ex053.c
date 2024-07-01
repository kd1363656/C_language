#include <stdio.h>
main()
{
	int a = 100, b = 200, w = 0;
	int* pa, * pb,*pw;

	pa = &a;
	pb = &b;
	pw = &w;

	printf("実行前：a = %d\tb = %d\n", *pa, *pb);
	printf("実行前のアドレス：a = %d\tb = %d\n", &pa, &pb);

	/**pw = *pa;
	*pa = *pb;
	*pb = *pw;*/
	pa = &b;
	pb = &a;


	printf("実行後：a = %d\tb = %d\n", *pa, *pb);
	printf("&a = %d\t&b = %d\tw = %d\n", &a, &b, &w);
	printf("&pa = %d\t&pb = %d\t&pw = %d\n", pa, pb,pw);

}