#include <stdio.h>
int main()
{
    int i;

    printf("loop First \n");
    for (i = 0; i < 10; i = i + 2)
        printf("%d\n", i);

    printf("loop second \n");
    for (i = 100; i >= 0; i = i - 7)
        printf("%d\n", i);

    printf("loop Third \n");
    for (i = 1; i <= 10; i = i + 1)
        printf("%d\n", i);

    printf("loop Fourth \n ");
    for (i = 2; i < 100; i = i * 2)
        printf("%d \n", i);

    return 0;
}