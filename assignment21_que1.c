//1. Define a structure Employee with member variables id, name, salary.
#include<stdio.h>
#include<conio.h>
struct employee
{
	int id;
	char name[20];
	int salary;
};
int main()
{
	struct employee e;
	printf("enter the name of employee:-\n");
	gets(e.name);
	
	printf("enter the id:-\n");
	scanf("%d",&e.id);

	printf("enter the salary:-\n");
	scanf("%d",&e.salary);
	
	printf("name = %s,id = %d,salary = %d",e.name,e.id,e.salary);
return 0;
}

