#include<stdio.h>
void main()
{
	int sum = 0;
	int s;
	int e;
	
	printf("Enter starting: ");
	scanf("%d",&s);
	
	printf("Enter ending: ");
	scanf("%d",&e);
	

	
	while(s <= e)
	{
		sum = (sum + s);
		s++;
	}
	
	printf("%d",sum);
}