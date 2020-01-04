#include <stdio.h>
void main()
{
	char ch;

	printf("Enter a Character to Identify: ");
	scanf("%c", &ch);

	if((ch >= 65)&&(ch <= 90))
		puts("Capital Letter");
	else if((ch >= 97)&&(ch <= 122))
	 	puts("Small Letter");
	else if((ch >= 48)&&(ch <= 57))
	 	puts("Digit");
	else
	 	puts("Special Symbol"); 
}