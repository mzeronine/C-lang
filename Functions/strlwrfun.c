#include<stdio.h>
#include<string.h>

int main()
{
	char string1[]="Hello World";
	
printf("Value of string: %s", string1);

strlwr(string1);
printf("the lower string is: %s", string1);

return 0;
}