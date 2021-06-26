#include<stdio.h>
int main()
{
    char asc;
    printf("Enter the your fav char:");
    scanf("%c", &asc);

    printf("ASCII value of char is: %c = %d", asc, asc);
    return 0;
}