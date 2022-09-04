//FACTORIAL
#include <stdio.h>
void main()
{
    int num,factorial=1;
    printf("enter number ");
    scanf("%d",&num);
    printf("%d factorial=",num);
    while(num>0)
    {
        factorial*=num;
        printf("%d*",num);
        num--;
    }
    printf("=%d",factorial);
}
