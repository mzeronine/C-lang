#include <stdio.h>
#include<string.h>

int main()
{
	char str[20];
	printf("Enter the string:");
    gets(str);

    strrev(str);	
    printf("This is reverse string that you entred", str);

return 0;
}