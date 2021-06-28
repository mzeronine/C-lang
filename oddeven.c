#include <stdio.h>
int main ()
{
    int a;

    printf("Enter the number:");
    scanf("%d", &a);

    
    if(a % 2 != 0)

        printf("This is odd number");

    else
        printf("This is even number");
    
    return 0;
}