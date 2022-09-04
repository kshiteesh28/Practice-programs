/*C program to read and print an Employee’s Details using Structure
- In this program, we will read employee’s details like name, employee id and salary
 using structure and then print the entered values.
 */
#include <stdio.h>
int n;

typedef struct employee{
  char name[100];
  int id;
  int salary;
}emp;

void employee_scan(emp s[n]);
void employee_print(emp s[n]);
void main()
{
  emp s[n];
  printf("enter the total no. of employees: ");
  scanf("%d",&n);
  printf("\nEnter employee details:");
  employee_scan(s);
  printf("The entered details are:\n");
  employee_print(s);
}
void employee_scan(emp s[n])
{
  for(int i=0;i<n;i++)
  {
    printf("\nemployee %d",i+1);
    printf("\nName:");
    scanf("%s",s[i].name);
    printf("\nemployee ID:");
    scanf("%d",&s[i].id);
    printf("\nsalary:");
    scanf("%d",&s[i].salary);
  }
}
void employee_print(emp s[n])
{
  for(int i=0;i<n;i++)
  {
    printf("\nEmployee %d:",i+1);
    printf("\nName:%s",s[i].name);
    printf("\nemployee ID:%d",s[i].id);
    printf("\nsalary:%d\n",s[i].salary);
  }
}
