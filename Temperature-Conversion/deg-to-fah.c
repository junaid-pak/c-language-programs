#include <stdio.h>

void main() {
	int tDeg, tFeh;
	printf("Input Temp in Degree: ");
	scanf("%d", &tDeg);
	tFeh = (tDeg * 9 / 5) + 32;
	printf("\nTemp in Fahrenheit is: %dF\n", tFeh);
}
