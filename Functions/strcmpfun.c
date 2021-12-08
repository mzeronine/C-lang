#include<stdio.h>
#include<string.h>

int main()
{
char str1[10];
char str2[10];

printf("Enter first String1"); gets(str1);
printf("Enter second string"); gets(str2);

if (strcmp(str1, str2)==1)
{
printf("String is not same");
}
else
{
printf("String is same");
}
return 0;
}