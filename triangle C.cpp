#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter side a:");
	scanf("%d",&a);
	printf("enter side b:");
	scanf("%d",&b);
	printf("enter side c:");
	scanf("%d",&c);

	if (a==b && a==c && b==c)
	{
		printf("equilateral");
	}
	else if (a==b or b==c or a==c)
	{
		printf("isoceles");
	}
	else	{
		printf("no sides are equal");
	}
	
}
