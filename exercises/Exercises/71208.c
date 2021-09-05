#if 0
#include <stdio.h>
#include <stdlib.h>
#define EXTRA_HOUR 1.5f
#define BASE_TAX 0.15f
#define EXTRA_TAX 0.2f
#define EXCEED_TAX 0.25f

void show_menu(void);
void calc_salary(float base_salary, float hours);

int main(void)
{
	float hours = 0;
	char choice;
	do
	{
		show_menu();
		scanf_s("%c", &choice, 1);
		switch (choice)
		{
		case '1':
			printf("Hello, you select $8.75/hr. Enter the work hour: ");
			scanf_s("%f", &hours);
			calc_salary(8.75f, hours);
			break;
		case '2':
			printf("Hello, you select $9.33/hr. Enter the work hour: ");
			scanf_s("%f", &hours);
			calc_salary(9.33f, hours);
			break;
		case '3':
			printf("Hello, you select $10.00/hr. Enter the work hour: ");
			scanf_s("%f", &hours);
			calc_salary(10.00f, hours);
			break;
		case '4':
			printf("Hello, you select $11.20/hr. Enter the work hour: ");
			scanf_s("%f", &hours);
			calc_salary(11.20f, hours);
			break;
		case '5':
			break;
		default:
			printf("input error, please choice 1-5 number:");
			break;
		}
		getchar();
		system("pause");
	} while (choice != '5');

	return 0;
}

void show_menu(void)
{
	system("cls");
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate of action:\n");
	printf("1) $8.75/hr\t\t\t2) $9.33/hr\n");
	printf("3) $10.00/hr\t\t\t4) $11.20/hr\n");
	printf("5) quit\n");
	printf("*****************************************************************\n");
}

void calc_salary(float base_salary, float hours)
{
	float salary;			//˰ǰ����
	float taxed_salary;		//˰����
	float tax;				//Ӧ������˰

	if (30 >= hours)
	{
		salary = hours * base_salary;
		tax = salary * BASE_TAX;
		taxed_salary = salary - tax;
	}
	else if (40 >= hours)
	{
		salary = hours * base_salary;
		tax = 300 * BASE_TAX + (salary - 300)*EXCEED_TAX;
		taxed_salary = salary - tax;
	}
	else
	{
		salary = (40 + ((hours - 40) * EXTRA_HOUR)) * base_salary;
		if (salary <= 450)
		{
			tax = (300 * BASE_TAX) + (salary - 300)*EXTRA_TAX;
		}
		else
		{
			tax = (300 * BASE_TAX) + (150 * EXTRA_TAX) + ((salary - 450)*EXCEED_TAX);
			//tax = (300 * BASE_TAX) + (salary - 300)*EXTRA_TAX + (salary - 450)*EXCEED_TAX;
		}
		taxed_salary = salary - tax;
	}
	printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n", salary, tax, taxed_salary);
}
#endif