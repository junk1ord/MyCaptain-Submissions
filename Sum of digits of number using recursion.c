#include<stdio.h>

int digits_sum(int x);

int main()
{
	int n, sum;
	printf("Enter a multi-digit number: ");
	scanf("%d", &n);
	sum = digits_sum(n);
	printf("The sum of digits of %d is %d.", n, sum);
	return 0;
}

int digits_sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return (n%10 + digits_sum(n/10));
	}
}
