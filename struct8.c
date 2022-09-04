#include<stdio.h>
int num_ofPeople;
typedef struct d{
    char name[20];
    char hobby[50];
}details;
void output(details *human);
void main()
{
    printf("Enter number of people: ");
    scanf("%d",&num_ofPeople);
    details person[num_ofPeople];
    details *p = person;
    for(int i=0;i<num_ofPeople;i++)
    {
        printf("\nEnter name of the person %d: ",i+1);
        scanf("\n%[^\n]s",(p+i)->name);
        printf("Enter %s's Hobby: ",(p+i)->name);
        scanf("\n%[^\n]s",(p+i)->hobby);
        printf("\n");
    }

    output(p);

}
void output(details *human)
{
    printf("\nPersonal Details");
    for(int i=0;i<num_ofPeople;i++)
    {
        printf("\n\nPerson %d\nName: %s\n%s's Hobby: %s\n",i+1,(human+i)->name, (human+i)->name, (human+i)->hobby);

    }
}
//Demonstrating pointer to structure array
