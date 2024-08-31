#include<stdio.h>
void main()
{
	int choice;
	printf("Enter choice 1 or 2: ");
	scanf("%d",&choice);
	if(choice == 1)
	{
		int num;
		printf("Enter number: ");
		scanf("%d",&num);
		if(num % 2 == 0)
		{
			printf("%d is even",num);
		}
		else
		{
			printf("%d is odd",num);
		}
	}
	else if(choice==2)
	{
		int basic;
		int da, ta, hra, tsalary;
		printf("Enter salary: ");
		scanf("%d",&basic);
		if(basic <= 5000)
		{
			da = basic*0.10;
			ta = basic*20;
			hra = basic*25;
			tsalary = basic + da + ta + hra;
			printf("Total salary is %d", tsalary); 
		}
		else
		{
			da = basic*0.15;
			ta = basic*0.25;
			hra = basic*0.30;
			tsalary =  basic + da + ta + hra;
			printf("Total salary is %d", tsalary);
		}
	}
}
