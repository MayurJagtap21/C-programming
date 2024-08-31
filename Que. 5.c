#include<stdio.h>
void main()
{
	char choice;
	printf("Are you a student Yes(y) or no(n): ");
	scanf("%c",&choice);
	float purchase, discount, finalprice;
	printf("Enter the purchace price: ");
	scanf("%f",&purchase);
	if(choice=='y')
	{
		if(purchase>500)
		{
			discount=800*20/100;
			printf("Discount price: %f\n",discount);
			finalprice=purchase-discount;
			printf("final price=%f",finalprice);
		}
		else
		{
			discount=800*10/100;
			printf("Discount price: %f\n",discount);
			finalprice=purchase-discount;
			printf("final price=%f",finalprice);
		}
	}
	else
	{
		if(choice=='n')
		{
			if(purchase>600)
			{
				discount=800*15/100;
				printf("Discount price: %f\n",discount);
				finalprice=purchase-discount;
				printf("final price=%f",finalprice);
			}
			else
			{
				printf("There is ni discount");
			}
		}
	}
}