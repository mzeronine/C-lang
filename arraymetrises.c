/*
a) Write a C program, to find both the largest and smallest number in a list of integers using an Array. 
b) Write a C program, to add two matrices using an Array. 
c) Write a C program, to multiply two matrices using an Array.
*/

#include <stdio.h>
void larnsml()
{
    int size;
    printf("Enter number of elements:");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element at loc %d: ", i);
        scanf("%d", &arr[i]);
    }
    int location = 0;
    for (int c = 0; c < size; c++)
    {
        if (arr[c] > arr[location])
        {
            location = c;
        }
    }
    printf("Maximum element is present ar location %d and its value is %d.\n", location + 1, arr[location]);
}

void addmat()
{
    int p, n, c, d, first[10][10], second[10][10], sum[10][10];
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &p, &n);
    printf("Enter the elements of first matrix\n");
    for (c = 0; c < p; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &first[c][d]);
    printf("Enter the elements of second matrix\n");
    for (c = 0; c < p; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &second[c][d]);
    printf("Sum of entered matrices:-\n");
    for (c = 0; c < p; c++)
    {
        for (d = 0; d < n; d++)
        {
            sum[c][d] = first[c][d] + second[c][d];
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }
}

void mulmat()
{
    int f[10][10], b[10][10], mul[10][10], r, c, d, j, k;
    printf("enter the number of row=");
    scanf("%d", &r);
    printf("enter the number of column=");
    scanf("%d", &c);
    printf("Enter the first matrix element=\n");
    for (d = 0; d < r; d++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &f[d][j]);
        }
    }
    printf("Enter the second matrix element=\n");
    for (d = 0; d < r; d++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[d][j]);
        }
    }

    printf("Multiply of the matrix=\n");
    for (d = 0; d < r; d++)
    {
        for (j = 0; j < c; j++)
        {
            mul[d][j] = 0;
            for (k = 0; k < c; k++)
            {
                mul[d][j] += f[d][k] * b[k][j];
            }
        }
    }
    for (d = 0; d < r; d++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", mul[d][j]);
        }
        printf("\n");
    }
}

    int main()
    {
        int choice;

        printf("1.Find both the largest and smallest number in a list of integers using an Array, \n 2.Add two matrices using an Array, \n 3.Multiply two matrices using an Array. \n Choose One Number:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            larnsml();
            break;

        case 2:
            addmat();
            break;

        case 3:
            mulmat();
            break;

        default:
            printf("Entered invalid input.");
        }

        return 0;
    }