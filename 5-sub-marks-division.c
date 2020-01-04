#include <stdio.h>
void main()
{
	float obtained, total=500, percentage;
	int stdNumber, phys, chem, bio, math, comp;
	char name[20];

	printf("Enter Your Name: ");
	scanf("%s", name);
	printf("Enter Your Studient Number: ");
	scanf("%d", &stdNumber);
	printf("Enter Marks in Sequence(physics,Chemistry,Biology,Math,Computer): ");
	scanf("%d%d%d%d%d", &phys, &chem, &bio, &math, &comp);

	obtained = phys + chem + bio + math + comp;
	percentage = (obtained * 100) / total;

	printf("\nStudient Name: %s\n", name);
	printf("Studient Number: %d\n", stdNumber);
	printf("Obtained Marks: %.0f\n", obtained);
	printf("Percentage: %.1f%c\n", percentage, 37);

	if(percentage > 60)
		puts("Division: 1st");
	else if((percentage >= 50)&&(percentage < 60))
		puts("Division: 2nd");
	else if((percentage >= 40)&&(percentage < 50))
		puts("Division: 3rd");
	else if(percentage < 40)
		puts("Remarks: Fail");
}