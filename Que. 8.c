#include<stdio.h>
void main()
{
    int r1, r2;
	int num;
	int org;
	int sum=0;
	int fact = 1;
	int i = 1;
	
	
	printf("Enter number: \n");
	scanf("%d",&num);
	
	org = num;
	while(num>0)
	{
		r1=num%10;
		while(r1>1)
	{
		fact= fact*r1;
		r1--;
	}
	num=num/10;	
	sum = sum + fact;
	fact = 1;
	}
	if(org == sum)
	{
		printf("Number is strong\n");
	}
	else{
		printf("Number is not strong\n");
	}
}