#include <stdio.h>

/*print fahrenehit-celsius table floating point*/

main()
{
	float fehr, celsius;
	float lower, step, upper;

	lower = 0;
	step = 20;
	upper = 300;

	fehr = lower;
	printf("%10s %10s\n", "fehrenheit", "celsius");

	while(fehr <= upper) {
		celsius = (5.0/9.0) * (fehr - 32.0);
		printf("%3.0f %17.1f\n", fehr, celsius);
		fehr = fehr + step;
	}

}
