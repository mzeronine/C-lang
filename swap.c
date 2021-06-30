#include<stdio.h>
int main()
{
    int num1, num2, swaper;

    printf("Enter the first number:");
    scanf("%1d",&num1);

    printf("Enter the second number:");
    scanf("%1d",&num2);
    
    swaper = num1; 

    num1=num2;

    num2=swaper;

    printf("The first swaped number is: %1d \n", num1);
    printf("The second swaped number is: %1d", num2);

    return 0;
    
}