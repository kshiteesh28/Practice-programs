//FACTORS OF A NUMBER
#include <stdio.h>
void main()
{
    int i,num;
    printf("enter the number ");
    scanf("%d",&num);
    i=1;
    while(i<=num)
    {
        if(num%i==0)
       {
           printf("%d ",i);
       }
        i++;

    }
}
