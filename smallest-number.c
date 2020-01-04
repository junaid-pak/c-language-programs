#include <stdio.h>
void main()
{
	int no1, no2, no3;

	printf("Enter Three Numbers (A,B,C): ");
	scanf("%d%d%d", &no1, &no2, &no3);

	if((no1 < no2) && (no1 < no3))
		printf("Number A is Smallest\n");
	else if((no2 < no1) && (no2 < no3))
		printf("Number B is Smallest\n");
	else if((no3 < no1) && (no3 < no2))
		printf("Number C is Smallest\n");
}