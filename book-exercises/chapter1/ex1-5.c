#include <stdio.h>

main()
{
	/* fehreinheit-celsius in reverse*/

	int fehr;

	for(fehr = 300; fehr >= 0; fehr = fehr - 20)
	{
		printf("%3d %6.1f \n", fehr, (5.0/9.0) * (fehr - 32.0));
	}
}
