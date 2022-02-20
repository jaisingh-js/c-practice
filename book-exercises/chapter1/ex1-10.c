#include <stdio.h>

/* replace backspace, tab, backslash to their string form */

main()
{
	int c;

	while((c = getchar()) != EOF){
		if( c == '\t'){
			putchar('\\');
			putchar('t');
		}

	}

}
