#include<stdio.h>
void main()
{
	int num1, num2, a, b, c;
	int sum= 0;
	char choice;
	printf("Enter First Number: ");
	scanf("%d",&a);
	fflush(stdin);
	printf("Enter Second Number: ");
	scanf("%d",&b);
	fflush(stdin);
	printf("Enter choice (Sum = +, Subtraction = -,  Multiplication = *, Division = /, Mod = %): ");
	scanf("%c",&choice);
	if(a>=0)
	{
		if(choice=='+')
		{
			c=a+b;
			printf("sum of numbers are %d",c);
		}
		if(choice=='-')
		{
			c=a-b;
			printf("subtraction of numbers are %d",c);
		}
		if(choice=='*')
		{
			c=a*b;
			printf("multi of numbers are %d",c);
		}
		if(choice=='/')
		{
			c=a/b;
			printf("division of numbers are %d",c);
		}
		if(choice=='%')
		{
			c=a%b;
			printf("mod of numbers are %d",c);
		}
	}
	else
	{
		printf("Enter valid choice");
	}
	
}