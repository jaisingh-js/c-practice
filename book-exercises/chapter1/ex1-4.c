#include <stdio.h>

/* celcius-fehrenheit conversion table floating point */

main()
{
	float fehr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf("%7s %10s\n", "celsius", "fehrenheit");

	while(celsius <= upper){
		fehr = ((9.0/5.0)) * celsius + 32;
		printf("%3.0f %14.1f \n", celsius, fehr);
		celsius = celsius + step;
	}

}
