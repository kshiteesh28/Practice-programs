//TO SWAP 2 NUMBERS WITH FUNCTIONS
#include <stdio.h>
int swap(int,int);
void main()
{
    int a,b;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
}
int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("your numbers are: %d and %d",a,b);
    printf("\nmagicc they have been swapped!!\n\n");
    return 0;
}
