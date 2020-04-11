#include<stdio.h>
int main()
{
	int n;
	printf("Welcome to the restaurant. Have a look at the menu: \n\n");
	printf("\t\tMENU");
	printf("\n\nSr. No.\tItem\t\tPrice");
	printf("\n\n1.\tPizza\t\tRs. 520/-");
	printf("\n\n2.\tBurger\t\tRs. 430/-");
	printf("\n\n3.\tFrench Fries\tRs. 199/-");
	printf("\n\n4.\tPasta\t\tRs. 470/-");
	printf("\n\n5.\tNoodles\t\tRs. 499/-");
	printf("\n\n6.\tSandwich\tRs. 199/-");
	printf("\n\n7.\tCoke\t\tRs. 99/-");
	printf("\n\nWhat would you like to have? Please enter the item number: ");
	scanf("%d", &n);
	printf("\n");
	switch(n)
	{
		case 1:
			{
				printf("You would like to have a Pizza?\nThat would be Rs. 520/- please.");
				break;
			}
		case 2:
			{
				printf("You would like to have a Burger?\nThat would be Rs. 430/- please.");
				break;
			}
		case 3:
			{
				printf("You would like to have French Fries?\nThat would be Rs. 199/- please.");
				break;
			}
		case 4:
			{
				printf("You would like to have Pasta?\nThat would be Rs. 470/- please.");
				break;
			}
		case 5:
			{
				printf("You would like to have Noodles?\nThat would be Rs. 499/- please.");
				break;
			}
		case 6:
			{
				printf("You would like to have a Sandwich?\nThat would be Rs. 199/- please.");
				break;
			}
		case 7:
			{
				printf("You would like to have a Coke?\nThat would be Rs. 99/- please.");
				break;
			}
		default:
			{
				printf("We are sorry. The dish number you ordered doesn't exist in our menu.");
			}
	}
	printf("\n\nThank you for eating at our restaurant!");
}
