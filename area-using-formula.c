#include <stdio.h>
#include <math.h>
void main()
{
	int a, b, c;
	float area, s;

	printf("Enter Sides (A,B,C): ");
	scanf("%d%d%d", &a, &b, &c);

	s = (a + b + c) / 2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Value of S is: %.1f\n", s);

	if((a != 0)&&(b != 0)&&(c != 0))
		printf("Area: %f\n", area);
	else
		puts("There is not Triangle");

}