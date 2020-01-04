#include <stdio.h>
void main()
{
	char text[100], count=0;

	printf("Enter Some Text: ");
	gets(text);

	while(text[count] != 0)
	{
		count++;
	}

	printf("Reverse Text is: ");

	for(int i=count; i > 0; i--)
	{
		printf("%c", text[i-1]);
	}
	puts("");
}