#include <stdio.h>
#include <math.h>
int main()
{
    float q,r,Dd,Dr;

    printf("Enter the Divisor:");
    scanf("%f", &Dr);

    printf("Enter the Dividend:");
    scanf("%f", &Dd);

    q = Dd / Dr;
    // Quotient

    // Reminder
    r = Dd / Dr;

    printf("The quatioent and reminder is %0.2f & %0.2f", q, r);

    return 0;
}