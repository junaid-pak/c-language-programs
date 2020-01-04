#include <stdio.h>
#include <stdlib.h>
void main()
{
	int no1, no2, result;
	char operator;

	printf("Choose Operator(+,-,*,/): ");
	scanf("%c", &operator);
	printf("1st Number: ");
	scanf("%d", &no1);
	printf("2nd Number: ");
	scanf("%d", &no2);

	if((operator == '/')&&(no2 == 0))
	{
		puts("Division is Not Possible");
		exit(0);
	}
	switch(operator)
	{
		case '+': result = no1 + no2;
			break;
		case '-': result = no1 - no2;
			break;
		case '*': result = no1 * no2;
			break;
		case '/': result = no1 / no2;	
			break;
		default: puts("Invalid Operator Number");
	}
	printf("Result: %d\n", result);
}