#include<stdio.h>

main()
{
	int gross_salary, base_salary;
	float HRA, DA, TA;
	
	printf("Enter your Gross Salary = ");
	scanf("%d",&gross_salary);
	printf("Enter your HRA value = ");
	scanf("%f",&HRA);
	printf("Enter your DA value = ");
	scanf("%f",&DA);
	printf("Enter your TA value = ");
	scanf("%f",&TA);
	
	HRA=gross_salary*HRA/100;
	DA=gross_salary*DA/100;
	TA=gross_salary*TA/100;
	
	base_salary=gross_salary+HRA+DA+TA;
	
	printf("Your Base Salary =%d",base_salary);
}
