#include<stdio.h>

int main()

{

	char name[30];

	char KRA_PIN[10];

	float basic,hra,overtime,da,pf,gross;

	printf("Enter name:");

	gets(name);

	printf("KRA_PIN:");

	gets(KRA_PIN);

	printf("enter normal pay:");

	scanf("%f",&basic);

	printf("enter hourly rate:");

	scanf("%f",&hra);

	printf("enter overtime hours:");

	scanf("%f",&overtime);

	printf("enter tax paid:");

	scanf("%f",&da);

	/*pf automatic calculated 12%*/

	pf=(basic*30/100);

	gross=basic+da+hra+pf+overtime;

	printf("\nName:%s\nNormal Pay:%f\nHourly Rate:%f\nOvertime Hours:%f\nTax Paid:%f\n**GROSS SALARY:%f**",name,basic,hra,da,pf,gross);

	return 0;

}
