#include<stdio.h>
int main ()
{
    long long l;
    int i;
    long double d;
    char c;

    printf("The size of long: %zu \n", sizeof(l));
    printf("The size of int: %zu \n", sizeof(i));
    printf("The size of double: %zu \n", sizeof(d));
    printf("The size of char: %zu ", sizeof(c));

    return 0;

}