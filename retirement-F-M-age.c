#include <stdio.h>
void main()
{
	int age;
	char gender;

	printf("Enter Gender (M/F): ");
	scanf("%c", &gender);
	printf("Enter Your Age: ");
	scanf("%d", &age);

	if((gender == 'F')&&(age <= 50))
		puts("Not Retirement Age");
	else if((gender == 'M')&&(age <= 65))
		puts("Not Retirement Age");
	else
		puts("Retirement Age");
}