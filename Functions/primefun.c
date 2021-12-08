#include<stdio.h>
int isprime(int m);
int main()
{
	int num1, num2, a, fg;
	printf("Enter the +tive numbers:");
	scanf("%d %d", &num1, &num2);
	
printf("Prime num between %d and %d are", num1, num2);

for(i=num1+1; a<num2; ++a)

fg= isprime(a);
(fg==1)
printf("%d:" a);

}
return 0;	
}

int isprime(int m)
{
int x, fg=1
for(x=2, x<=m/2; ++x)
{
if(n%x == 0)
{
fg=0;
break;
}
}
return fg;
}