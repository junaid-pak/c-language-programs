#include <stdio.h>
void main()
{
	char arr[26], ch=65;

	for(int i=0; i<26; i++)
	{	
		arr[i] = ch;
		printf("%c\t", ch);
		ch++;
	}
	puts("");
	for(int i=0; i<6; i++)
	{	
		printf("%c\t", arr[i]);
	}
	puts("");
	for(int i=25; i>15; i--)
		printf("%c\t", arr[i]);
	
	printf("\n%c\n", arr[9]);
}