//HCF OF TWO NUMBERS
#include<stdio.h>
void main()
{
    int i,m,n,hcf=0;
    printf("enter the two numbers ");
    scanf("%d%d",&m,&n);


    for(i=1;i<=m&&i<=n;i++)
    {
        if(n%i==0&&m%i==0)
        {
            hcf=i;
        }

    }
    printf("hcf is %d",hcf);

}
