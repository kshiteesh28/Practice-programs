//pointer to structure array
#include <stdio.h>
int num;
typedef struct p{
  char name[100];
  char hobby[100];
}intro;
void output(intro *p,int n);
void input(intro *p,int n);
void main()
{
    printf("enter total number of entries:");
    scanf("%d",&num);
    intro data[num],*ptr;
    ptr=data;
    input(ptr,num);
    ptr=data;
    output(ptr,num);
}
void input(intro *p,int n)
{
    for(int entry=0;entry<n;entry++)
    {
        printf("enter your name:");
        scanf("\n%[^\n]s",p->name);
        printf("whats your hobby?");
        scanf("\n%[^\n]s",p->hobby);
        p++;
    }
}
void output(intro *p,int n)
{
    printf("\nthe data you've entered is:\n");
    for(int entry=0;entry<n;entry++)
    {
        printf("\nMy name is %s and my hobby is %s",p->name,p->hobby);
        p++;
    }
}

