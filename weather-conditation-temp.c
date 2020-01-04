#include <stdio.h>
void main()
{
	int temp;

	printf("Enter Temperature in Degree: ");
	scanf("%d", &temp);

	if(temp > 40)
		puts("Very Hot");
	else if((temp > 35)&&(temp <= 40))
		puts("Tolerable");
	else if((temp >= 30)&&(temp <= 35))
		puts("Warm");
	else if(temp < 30)
		puts("Cool");
}