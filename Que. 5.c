#include<stdio.h>
void main()
{
	int basic = 7777; 
	int da, ta, hra, tsalary;
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