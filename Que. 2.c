#include<stdio.h>
void main()
{
	int num1 = 0;
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	int i = 1;
	while(i <= 10)
	{
		num1 = num*i;
		printf("%d * %d = %d \n",num,i,num1);
		i++;
	}
}