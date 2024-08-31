#include<stdio.h>
void main()
{
	int num, fdigit, ldigit, sum;
	printf("Enter number: ");
	scanf("%d",&num);
	
	ldigit = num % 10;
	while(num >= 10)
	{
		num = num / 10;
	}
	fdigit = num;
	
	sum = fdigit + ldigit;
	printf("Sum of first digit and last digit is %d",sum);
}