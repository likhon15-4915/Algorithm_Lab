#include <stdio.h>
#include <ctype.h>
int main()
{
	char input[100];
	printf("Input: ");
	fgets(input, sizeof(input), stdin);
	printf("Converted Output: ");
	for (int i = 0; input[i] != '\0'; i++)
	{
    	if (isalpha(input[i]))
    	{
        	if (input[i] >= 'a' && input[i] < 'z')
        	{
            	putchar(input[i] + 1);
        	}
        	else if (input[i] == 'z')
        	{
            	putchar('a');
     	   }
        	else if (input[i] >= 'A' && input[i] < 'Z')
        	{
            	putchar(input[i] + 1);
        	}
        	else if (input[i] == 'Z')
        	{
            	putchar('A');
        	}
    	}
    	else
    	{
        	putchar(input[i]);
    	}
	}
	return 0;
}
