#include <stdio.h>
#include <ctype.h>
void main()
{
	char string[100], count=0;

	printf("Enter a String: ");
	gets(string);
	
	printf("String in Lower Case is: ");
	while(string[count] != 0)
	{
		printf("%c", tolower(string[count]));
		count++;
	}
	puts("");
	
}