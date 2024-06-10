#include<stdio.h>

main()
{
	int a, b, c, d;
	
	printf("Enter your A number = ");
	scanf("%d",&a);
	
	printf("Enter your B number = ");
	scanf("%d",&b);
	
	printf("Enter your C number = ");
	scanf("%d",&c);
	
	printf("Enter your D number = ");
	scanf("%d",&d);
	
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				printf("Minimum number is = %d",a);
			}
			else
			{
				printf("Minimum number is = %d",d);
			}
		}
		else
		{
			if(c<d)
			{
				printf("Minimum number is = %d",c);
			}
			else
			{
				printf("Minimum number is = %d",d);
			}
		}
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				printf("Minimum number is = %d",b);
			}
			else
			{
				printf("Minimum number is = %d",d);
			}
		}
		else
		{
			if(c<d)
			{
				printf("Minimum number is = %d",c);
			}
			else
			{
				printf("Minimum number is = %d",d);
			}
		}
	}
}
