#include<stdio.h>
void main()
{
	int l = 10;
	int w = 84;
	int a;
	int p;
	if(l > w)
	{
		a = (l * w);
		printf("%d is the area of rectangle", a);
	}
	else
	{
		p = 2*(l + w);
		printf("%d is the perimeter of rectangle", p);
	}
}