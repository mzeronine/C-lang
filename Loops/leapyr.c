#include<stdio.h>
int main()
{
    int year;
    printf("Hello:\n");
    printf("Please enter the year:");
    scanf("%d", &year);

    if(year % 4==0)
    {
        printf("%d is leap year.", year);

    }

    else
    {
        printf("%d is not leap year.", year);
    }

    return 0;

}