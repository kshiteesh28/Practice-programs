//TO FIND IF NUMBER IS PRIME OR NOT
#include<stdio.h>
void main()
{
    int i,num,count=0;
    printf("enter number ");
    scanf("%d",&num);
    i=1;
    while(i<=num)
    {
        if(num%i==0)
        {
            count++;
        }
        i++;
    }
    if(count<=2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}
