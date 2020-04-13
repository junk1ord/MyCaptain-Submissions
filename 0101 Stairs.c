#include<stdio.h>
int main()
{
	int n, i, j;
	printf("\n Enter the number of steps for the stairs: ");
	scanf("%d", &n);
	printf("\n\nThe staircase for %d steps will be like this:\n\n", n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("01");
		}
		printf("\n");
	}
	return 0;
}
