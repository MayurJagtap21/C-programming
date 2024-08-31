#include<stdio.h>
void main()
{
	int num;
	int org;
	int sum=0;
	int i =1;
	
	
	printf("Enter number: ");
	scanf("%d",&num);
	
	org = num;
	while(i < num)
	{
	if(num % i == 0)
	{
		sum = sum + i;
	}
	i++;
	
	}
	
	if(sum==org)
	{
		printf("Number is perfect number");
	}
	else{
		printf("Number is not perfect");
	}
}