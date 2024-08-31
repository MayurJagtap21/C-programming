#include<stdio.h>
void main()
{
    int rem;
	int num;
	int org;
	int rev =0;
	
	printf("Enter number: ");
	scanf("%d",&num);
	
	org = num;
	while(num != 0)
	{
	
	rem=num%10;
	rev = (rev*10)+rem;
	num=num/10;

	}
	
	if(org==rev)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome");
	}
}