#include <stdio.h>
void main()
{
	int tKel, tFeh;
	printf("Input Temp in Fahrenheit: ");
	scanf("%d", &tFeh);
	tKel = (tFeh - 32) * 5 / 9 + 273;
	printf("\nTemp in Kelvin is: %dC\n", tKel);
}