#include <stdio.h>

/* print input one word per line */

main()
{
    int c, ns, nt;
    ns = nt = 0;

    while((c=getchar()) != EOF) {
        if(c == ' '){
            ++ns;
        }
        else if(c == '\t'){
            ++nt;
        }
        else{
            if(ns > 0 || nt > 0){
                putchar('\n');
                ns = 0;
                nt = 0;
            }
            putchar(c);
        }
    } 
}