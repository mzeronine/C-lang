#include <stdio.h>
int main()
{
	int N1, N2;
	
	printf("Enter the first number:");
	scanf("%d", N1);
	
	printf("Enter the second number:");
	scanf("%d", N2);
	
	if(N1>N2)
	{
		printf("%d number is largest", N1);
	}
	else
	{
		printf("%d is largest number", N2);
	}
		return 0;
}