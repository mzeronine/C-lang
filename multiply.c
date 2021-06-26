#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Multiplication");
    printf("Enter the num:");
    scanf("%d", &a);
    printf("Enter the second num:");
    scanf("%d", &b);
    c = a * b;
    printf("Multiplication of your num is: %d", c);
    return 0;
}