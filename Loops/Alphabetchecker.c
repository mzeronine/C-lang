#include <stdio.h>
int main()
{
    char alp;
    printf("Enter the string");
    scanf("%c", &alp);

    if((alp>='a' && alp<='z')|| (alp>='A' && alp<='Z'))
    {
        printf("Thank You!");
    }

    else
    {
        printf("Sorry, you not entred character");
    }
    return 0;
}