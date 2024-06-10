#include<stdio.h>

main()
{
	int a;
	printf("Enter your number = ");
	scanf("%d",&a);
	
	(a>0)?printf("thise number is not neutral")
		 :(a==0)
			?printf("thise number is neutral")
			:(a<0)
				?printf("thise number is not neutral")
				:printf("Plz enter your proper number");
			
}
