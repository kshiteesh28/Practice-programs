/*C program to read and print an student’s Details using Structure
- In this program, we will read student’s details like name, student id,grade,section and transport
 using structure and then print the entered values.
 */
#include <stdio.h>
int n;

typedef struct stduent_detail{
  char name[30];
  int id;
  int grade;
  char section;
  char transport[20];
 }student;

void student_scan(student stud[n]);
void student_print(student stud[n]);

void main()
{
    printf("enter the number of students: ");
    scanf("%d",&n);
    student stud[n];
    printf("\nenter the details of students:\n");
    student_scan(stud);
    printf("\nthe entered details of students are: ");
    student_print(stud);
}

void student_scan(student stud[n])
{
    int entries;
    for(entries=0;entries<n;entries++)
    {
        printf("\nstudent %d",entries+1);
        printf("\nname:");
        scanf("\n%[^\n]s",&stud[entries].name);
        printf("student id:");
        scanf("%d",&stud[entries].id);
        printf("grade:");
        scanf("%d",&stud[entries].grade);
        printf("section:");
        scanf("\n%c",&stud[entries].section);
        printf("transport:");
        scanf("\n%[^\n]s",&stud[entries].transport);
    }
}

void student_print(student stud[n])
{
    int entries;
    for(entries=0;entries<n;entries++)
    {
        printf("student %d\n",entries+1);
        printf("name:%s\n",stud[entries].name);
        printf("id:%d\n",stud[entries].id);
        printf("grade:%d\n",stud[entries].grade);
        printf("section:%c\n",stud[entries].section);
        printf("transportation:%s\n\n",stud[entries].transport);
    }
}







