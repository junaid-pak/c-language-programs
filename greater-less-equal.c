#include <stdio.h>
void main()
{
	int no1, no2;

	printf("Enter Two Numbers (A,B): ");
	scanf("%d%d", &no1, &no2);

	if(no1 == no2)
		puts("Both Numbers are Equal");
	else if(no1 > no2)
		puts("Number A is Greater");
	else if(no2 > no1)
		puts("Number B is Greater");
}