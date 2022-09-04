//TO VERIFY IF NUMBER IS STRONG OR NOT
#include <stdio.h>
void main()
{
    int i,num,factorial,a,sum=0;
    printf("enter the number ");
    scanf("%d",&num);
    int temp=num;
    while(num>0)
    {
        a=num%10;
        num/=10;
        factorial=1;
        {
            for(i=1;i<=a;i++)
            {
                factorial*=i;
            }
            sum+=factorial;
        }
    }
    (sum==temp)?printf("strong number"):printf("not a strong number");
}
