//TO FIND HCF USING RECURSION
#include <stdio.h>
int gcd(int,int,int,int);
void main()
{
    int a,b,i=1,hcf;
    printf("enter the two numbers to find hcf: ");
    scanf("%d%d",&a,&b);
    printf("hcf is %d",gcd(a,b,i,hcf));
}
int gcd(int a,int b,int i,int hcf)
{
    if(a<i||b<i)
    {
        return hcf;
    }
    else
    {
        if(a%i==0&&b%i==0)
        {
            hcf=i;
        }
        return gcd(a,b,i+1,hcf);
    }
}
