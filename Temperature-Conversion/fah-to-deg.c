#include <stdio.h>
void main()
{
	int tDeg, tFeh;
	printf("Input Temp in Fahrenheit: ");
	scanf("%d", &tFeh);
	tDeg = (tFeh - 32) * 5/9;
	printf("\nTemp in Celsius is: %dC\n", tDeg);
}