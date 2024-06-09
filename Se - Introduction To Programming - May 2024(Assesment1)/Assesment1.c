//

#include<stdio.h>

int main()
{
	
	int i, no1,no2,no3,no4,no5;
	
	int choice, quantity, bill;
	
	int pizza=180, burger=100, dosa=120, idli=50;
	
	char cont;
	
	do
	{
				
		printf("\n-------------MENU--------------\n");
		printf("No.      Name           Price\n");
		printf("\n1    -   Pizza          RS.180");
		printf("\n2    -   Burger         RS.100");
		printf("\n3    -   Dosa           RS.120");
		printf("\n4    -   Idli           RS.50");
		
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
	
		if( choice == 1)
		{
			printf("Your choice is Pizza\n",no1);
		}
		else if(choice == 2)
		{
			printf("Your choice is Burger\n",no2);
		}
		else if(choice == 3)
		{
			printf("Your choice is Dosa\n",no3);
		}
		else if(choice == 4)
		{
			printf("Your choice is Idli\n",no4);
		}
		
		printf("\nEnter Quantity : ");
		scanf("%d",&quantity);
		
		if( choice == 1)
		{
			bill += pizza*quantity;
			printf("Your bill amount is : %d\n",bill);
		}
		else if(choice == 2)
		{
			bill += burger*quantity;
			printf("Your bill amount is : %d\n",bill);
		}
		else if(choice == 3)
		{
			bill += dosa*quantity;
			printf("Your bill amount is : %d\n",bill);
		}
		else if(choice == 4)
		{
			bill += idli*quantity;
			printf("Your bill amount is : %d\n",bill);
		}
	
		printf("\n\nDo you want to continue order (y or n) : ");
		scanf("%s",&cont);
		
	}
	
	while(cont == 'y' || cont == 'Y');
	
	return 0;
}
