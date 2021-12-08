#include<stdio.h>
#include<string.h>
int isPalindrome(char str,int n)
{
int i = 0,j = n-1;
while(i < j)
{
if(str[i] != str[j])
return 0;
}
return 1;
}
int main()
{
char str[1000];
gets(str);
int n = strlen(str);
if(isPalindrome(str, n)==1)
{
printf("is palindrome");
}
else{printf("no palindrome");
}
return 0;
}
