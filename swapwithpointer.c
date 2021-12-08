#include<stdio.h>
int main()
{
    int m, n, *p, *q, val;
    printf("Enter the value of m & n:");
    scanf("%d%d", &m, &n);

    printf("You Entered: m=%d & n=%d", m, n);

    p=&m;
    q=&n;

    val=*q;
    *q=*p;
    *p=val;

    printf("After swapping Value of m=%d & n=%d is:", m, n);

    return 0;
}