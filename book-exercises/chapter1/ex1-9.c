#include <stdio.h>

main()
{
	/* copy input to output replacing multiple spaces with one */

	int c;
	long sc;
	sc = 0;

	while((c = getchar()) != EOF){
		if(c == ' '){
			++sc;
			if(sc <= 1){
				putchar(c);
			}
		}

		if(c != ' '){
			putchar(c);
			
			if(sc > 0){
				sc = 0;
			}
		}
	}

}
