#include<stdio.h>
void main()
{
	float price, discount, discountedprice;
	printf("Enter price of product: ");
	scanf("%f",&price);
	if(price >= 5000)
	{
		if(price == 5000)
		{
		discount = (price/100)*4;
		discountedprice = price - discount;
		printf("Final price after discount is %f",discountedprice);
		}
		else if(price > 5000 && price <= 10000)
		{
		discount = (price/100)*6;
		discountedprice = price - discount;
		printf("Final price after discount is %f",discountedprice);
		}
		else if(price > 10000 && price <= 15000)
		{
		discount = (price/100)*8;
		discountedprice = price - discount;
		printf("Final price after discount is %f",discountedprice);
		}
		else if(price > 15000)
		{
		discount = (price/100)*10;
		discountedprice = price - discount;
		printf("Final price after discount is %f",discountedprice);
		}
	}
	else
	{
		printf("Purchase is not applicable for discount");
	}
	
}