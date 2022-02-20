#include <stdio.h>

main()
{
	/* program checking EOF condition */

	int c;

	while(c = getchar() != EOF){
		printf("%d\n", c);
	}

}
