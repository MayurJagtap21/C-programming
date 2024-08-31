#include<stdio.h>
void main()
{
    int count = 0;
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	int i = 2;
	while(i < num)
	{
		if(num % i == 0)
		{
			count++;	
		}
		i++;
	}
	if(count == 0)
	{
		printf("Number is prime");
	}
	else
	{
		printf("Number is not prime");
	}
}