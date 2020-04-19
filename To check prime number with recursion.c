#include<stdio.h>
void prime(int x);

int main()
{
	int n;
	printf("Enter the number to be checked: ");
	scanf("%d", &n);
	prime(n);
	return 0;
}

void prime(int x)
{
	int i=2;
	while(x%i!=0)
	{
		i++;
	}
	if(i==x)
	{
		printf("This is a prime number.");
	}
	else
	{
		printf("This isn't a prime number.");
	}
}
