#include<stdio.h>
void main()
{
	int num, r1, q1, r2, q2, sum, rev= 0;
	printf("Enter 3 digit number: ");
	scanf("%d", &num);
	if(num >= 100 && num <= 999)
	{
		//Addition of all digits in given number..
		r1 = num % 10;
		q1 = num / 10;
		r2 = q1 % 10;
		q2 = q1 / 10;
		sum = q2 + r2 + r1;
		printf("%d is the sum of all digit in given number \n", sum);
		
		//Reverse the given number
		rev = (rev * 10) + r1;
		rev = (rev * 10) + r2;
		rev = (rev * 10) + q2;
		printf("%d is the reverse of given number", rev);
	}
	else
	{
		printf("Enter valid number");
	}
	
}