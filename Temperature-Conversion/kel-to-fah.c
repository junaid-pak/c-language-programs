#include <stdio.h>

void main()
{
	int tKel, tFeh;
	printf("Input Temp in Kelvin: ");
	scanf("%d", &tKel);
	tFeh = (tKel - 273.15) * 9/5 + 32;
	printf("\nTemp in Fehrenheit is: %dF\n", tFeh);
}
