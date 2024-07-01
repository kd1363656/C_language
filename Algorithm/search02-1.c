#include <stdio.h>
main()
{
	int i,su, data[10] = {1,2,3,4,5,6,7,8,9};

	data[10] = 10;

	printf("’Tõ’l‚“‚ğ“ü—Í");
	scanf("%d", &su);

	for (i = 0; su != data[i]; i++);

	if(su == data[10]){
	
		printf("%d‚ÍŒ©‚Â‚©‚ç‚È‚©‚Á‚½", su);
	
	}
	else {

		printf("’Tõ’l%d‚Í’Tõ‰ñ”%d‚ÅŒ©‚Â‚©‚Á‚½", su, i);

	}
	




}