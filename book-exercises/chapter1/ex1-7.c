#include <stdio.h>

main()
{
	/* print EOF */

	int c;

	while((c = getchar()) == EOF){
		printf("%d\n", c);
	}

}
