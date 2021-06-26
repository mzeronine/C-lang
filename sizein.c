#include <stdio.h>
int main()
{
    int i;
    float f;
    char c;
    double d;

    printf("Value of Int, Float and Char is following \n");
    printf("Int: %zu \n", sizeof(i));
    printf("Float: %zu \n", sizeof(f));
    printf("Char: %zu\n", sizeof(c));
    printf("Double: %zu \n", sizeof(d));

    return 0;

}