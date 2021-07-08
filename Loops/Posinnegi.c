#include<stdio.h>
int main ()
{
    int a, b,c;
    printf("Hello User :) \n");
    printf("Enter the number:");
    scanf("%d", &a);
    if(a<0)
    {
        printf("Entered number is negitive");
    }
    else if (a=0)
{
    printf("This is nutral number");
}
    else
    {
        printf("This is positive number");
    }

    return 0;

}