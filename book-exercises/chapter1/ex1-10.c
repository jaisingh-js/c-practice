#include <stdio.h>

/* replace backspace, tab, backslash to their string form */

main()
{
	int c;

	while((c = getchar()) != EOF){
		if(c!='\b' && c!='\t' && c!='\\'){
			putchar(c);
		}

		if( c == '\t'){
			putchar('\\');
			putchar('t');
		}
		if(c=='\b'){
			putchar('\\');
			putchar('b');
		}
		if(c=='\\'){
			putchar('\\');
			putchar('\\');
		}

	}

}
