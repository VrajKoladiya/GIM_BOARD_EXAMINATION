#include<stdio.h>

main()
{
	int a=10, b=20, c;
	
	c=a, a=b, b=c;
	
	printf("A number is =%d\n",a);
	printf("B number is =%d",b);
	
}
