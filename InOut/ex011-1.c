#include <stdio.h>
main()
{
	char mj1, mj2, mj3, mj4, mj5, mj6, mj7, mj8, mj9, mj10;

	mj1 = 'A';
	mj2 = 'B';
	mj3 = 'C';
	mj4 = 'a';
	mj5 = 'b';
	mj6 = 'c';
	mj7 = '0';
	mj8 = '1';
	mj9 = '2';
	mj10 = ' ';

	printf("%3d%3d%3d\n",mj1 - 0x41,mj2 - 0x42,mj3 - 0x43);
	printf("%3d%3d%3d\n", mj4 - 0x61 , mj5 - 0x62, mj6 - 0x63);
	printf("%3d%3d%3d\n", mj7 - 0x30, mj8 - 0x31, mj9 - 0x32);
	printf("%3d", mj10 - 0x20);

}