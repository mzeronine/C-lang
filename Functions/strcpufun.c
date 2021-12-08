#include<stdio.h>
#include<string.h>

int main()
{
char str1[20];
char str2[20];

printf("Enter the first string \n");
gets(str1);

strcpy(str2, str1);

printf("string2 is copied sucessfully %s", str2);

return 0;
}