#include <stdio.h>
void main()
{
	int tDeg,tKel;
	printf("Enter Temperature in Centi: ");
	scanf("%d", &tDeg);
	tKel = tDeg + 273.15;
	printf("\nTemperature in Kelvin is: %dK\n", tKel);
}