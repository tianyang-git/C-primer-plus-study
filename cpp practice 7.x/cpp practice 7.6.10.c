// cpp practice 7.6.10.c
#include <stdio.h>
#define SINGLE 17850
#define HOLDER 23900
#define MARRY 29750
#define DIVORCE 14875
#define BASE_TAX 0.15
#define EXTRA_TAX 0.28
int main(void)
{
	char type;
	float salary;
	float tax, salary_taxed;
	do{
		printf("Please select tax type. There are four type: \n");
		printf("1)Single 2)House holder \n3)Married 4)Divorced \n5)Quit\n");
		scanf("%c", &type);
		switch (type){
			case '1':
				printf("Enter your salary:");
				scanf("%f", &salary);
				if (salary <= SINGLE)
				{
					tax = salary * BASE_TAX;
					salary_taxed = salary - tax;
				}
				else
				{
				 	tax = salary * BASE_TAX + (salary - SINGLE) * EXTRA_TAX;
					salary_taxed = salary - tax;	
				}
				printf("Hi, your salary is %.2f, tax is %.2f, after tax is salary is %.2f\n",\
						salary, tax, salary_taxed);
				break;
			case '2':
				printf("Enter your salary:");
				scanf("%f", &salary);
				if (salary <= HOLDER)
				{
					tax = salary * BASE_TAX;
					salary_taxed = salary - tax;
				}
				else
				{
				 	tax = salary * BASE_TAX + (salary - HOLDER) * EXTRA_TAX;
					salary_taxed = salary - tax;	
				}
				printf("Hi, your salary is %.2f, tax is %.2f, after tax is salary is %.2f\n",\
						salary, tax, salary_taxed);
				break;
			case '3':
				printf("Enter your salary:");
				scanf("%f", &salary);
				if (salary <= MARRY)
				{
					tax = salary * BASE_TAX;
					salary_taxed = salary - tax;
				}
				else
				{
				 	tax = salary * BASE_TAX + (salary - MARRY) * EXTRA_TAX;
					salary_taxed = salary - tax;	
				}
				printf("Hi, your salary is %.2f, tax is %.2f, after tax is salary is %.2f\n",\
						salary, tax, salary_taxed);
				break;
			case '4':
				printf("Enter your salary:");
				scanf("%f", &salary);
				if (salary <= DIVORCE)
				{
					tax = salary * BASE_TAX;
					salary_taxed = salary - tax;
				}
				else
				{
				 	tax = salary * BASE_TAX + (salary - DIVORCE) * EXTRA_TAX;
					salary_taxed = salary - tax;	
				}
				printf("Hi, your salary is %.2f, tax is %.2f, after tax is salary is %.2f\n",\
						salary, tax, salary_taxed);
				break;
			case '5':
				break;
			default:
				printf("Wrong type. Please retry.\n");
			}
		break;
	}while (type != '5');
	
	printf("Done.");
	return 0;
}
