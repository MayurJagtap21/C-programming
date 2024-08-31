#include<stdio.h>
void main()
{
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	int i = 1;
	int fact=1;
	while(i <= num)
	{
		fact = fact * i;
		i++;
	}
	
	printf("Factorial of given number is %d",fact);
}