#include<stdio.h>

int LCM(int a, int b);

void main()
{
	int x, y, lcm;
	printf("Enter the first number: ");
	scanf("%d", &x);
	printf("\nEnter the second number: ");
	scanf("%d", &y);
	lcm = LCM(x, y);
	printf("\nThe LCM is %d.", lcm);
}

int LCM(int a, int b)
{
	static int x=1;
	if(x%a == 0 && x%b == 0)
		return x;
	x++;
	LCM(a, b);
	return x;
}
