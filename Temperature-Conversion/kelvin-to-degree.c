#include <stdio.h>
void main()
{
	int tDeg,tKel;
	printf("Enter Temperature in Kelvin: ");
	scanf("%d", &tKel);
	tDeg = tKel - 273;
	printf("\nTemperature in Degree is: %d\n", tDeg);
}