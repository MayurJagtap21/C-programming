#include<stdio.h>
void main()
{
    int r2,r3,r4,r1;
	int num;
	int org;
	int sum=0;
	
	
	printf("Enter number: ");
	scanf("%d",&num);
	
	org = num;
	while(num != 0)
	{
	
	r1=num%10;
	r1=r1*r1*r1;
	sum=sum+r1;
	num=num/10;

	}
	
	if(sum==org)
	{
		printf("Number is armstrong");
	}
	else{
		printf("Number is not armstrong");
	}
}