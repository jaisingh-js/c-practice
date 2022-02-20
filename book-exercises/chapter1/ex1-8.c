#include <stdio.h>

/* program to count blanks, tabs and newlines */

main()
{
	long bc, tc, nc;
	bc = 0;
	tc = 0;
	nc = 0;
	long c;

	while((c = getchar()) != EOF){
		 if(c == '\b')
			 ++bc;
		 if(c == '\t')
			 ++tc;
		 if(c == '\n')
			 ++nc;
	}

	printf("Backspaces:%d, Tabs:%d, Newlines:%d\n", bc, tc, nc);

}
