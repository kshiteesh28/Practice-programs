//1-2+3-........N
#include <stdio.h>
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
        }
        else
        {
            sum-=i;
        }
    }
    printf("%d",sum);
}
