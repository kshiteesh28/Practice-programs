//TO FIND FIRST AND LAST DIGIT
#include <stdio.h>
void main()
{
    int i,num,rem,rev=0,temp,a;
    printf("enter the number ");
    scanf("%d",&num);
    temp=num;
    a=num%10;
    while(i=num)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;


    }
    printf("the first and last digit of %d are %d and %d",temp,rem,a);
}
