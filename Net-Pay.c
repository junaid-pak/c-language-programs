#include <stdio.h>
void main()
{
	int hRate, hWorked, taxInPer;
	float gross, tax, net;
	char name[20];

	printf("Enter Employee Name: ");
	gets(name);
	printf("Enter Hourly Rate: ");
	scanf("%d", &hRate);
	printf("Enter Worked Hours: ");
	scanf("%d", &hWorked);
	printf("Enter Tax in %c: ", 37); // 37 is an ASCII Code For "%" Sign
	scanf("%d", &taxInPer);

	gross = hRate * hWorked;
	tax = (taxInPer * gross) / 100;
	net = gross - tax;

	printf("\n%s\n", name);
	printf("Gross Pay is: %f\n", gross);
	printf("Tax on Pay is: %f\n", tax);
	printf("Net pay is: %f\n", net);
}