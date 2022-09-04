//SUM OF ODD NUMBERS FROM 1 TO N
#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("enter n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)

            {
                 sum+=i;
                 printf("+%d",i);
            }

    }
    printf("=%d",sum);
}
