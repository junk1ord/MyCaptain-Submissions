#include<stdio.h>
int main()
{
	float m;
	printf("Enter the marks secured by the kid out of 100: ");
	scanf("%f", &m);
	printf("\nThe Grade obtained by the student is:");
	if(m>=85)
	{
		printf(" Grade A");
	}
	else
	{
		if(m>=70)
		{
			printf(" Grade B");
		}
		else
		{
			if(m>=55)
			{
				printf(" Grade C");
			}
			else
			{
				if(m>=40)
				{
					printf(" Grade D");
				}
				else
				{
					if(m<40)
					{
						printf(" Grade F");
					}
				}
			}
		}
	}
	return 0;
}
