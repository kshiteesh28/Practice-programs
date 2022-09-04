//TO SWAP 2 NUMBERS WITH FUNCTION
#include<stdio.h>
void swap(int*,int*);
void main()
{
    int a,b;
    printf("enter the two number: ");
    scanf("%d%d",&a,&b);
    printf("the numbers before swapping are a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("the numbers after swapping are a=%d and b=%d\n",a,b);
}
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b,
    *a=*a-*b;
}
