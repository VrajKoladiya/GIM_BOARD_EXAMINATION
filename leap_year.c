#include<stdio.h>

main()
{
	int i, n;
	
	printf("Enter your first year = ");
	scanf("%d",&i);
	printf("Enter your second year = ");
	scanf("%d",&n);
	
	while(i<=n)
	{ 
		if(i%4==0)
			printf("%d\n",i);
			i++;
	}
}
