//nested structure
#include <stdio.h>
int students;
struct address{
char road[30];
int number;
}addr;

typedef struct a{
 char name[100];
 int id;
 struct address addr;
}info;
info demo;
void input(info studs[students],int);
void output(info studs[students],int);
void main()
{
    printf("enter the number of students:");
    scanf("%d",&students);
    info studs[students];
    input(studs,students);
    printf("\n the details of the students are:\n");
    output(studs,students);
}
void input(info studs[students],int count)
{
    printf("\nenter the details in given format\n");
    info demo = {
    "mousee",
    316,
    "heaven",
    100
    };
    printf("%s\n%d\n%s\n%d",demo.name,demo.id,demo.addr.road,demo.addr.number);
    for(int i=0;i<count;i++)
    {
        printf("\nenter details of student %d:",i+1);
        printf("\nName:");
        scanf("%s",&studs[i].name);
        printf("\nId:");
        scanf("%d",&studs[i].id);
        printf("\naddress with road name and house number:");
        scanf("\n%s%d",&studs[i].addr.road,&studs[i].addr.number);
    }
}
void output(info studs[students],int count)
{
    for(int i=0;i<count;i++)
    {
        printf("\nstudent %d:",i+1);
        printf("\n%s",studs[i].name);
        printf("\n%d",studs[i].id);
        printf("\n%s,%d\n\n",studs[i].addr.road,studs[i].addr.number);
    }
}
