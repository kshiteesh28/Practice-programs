//TO CALCULATE POWER OF A NUMBER
#include <stdio.h>
int pow(int,int);
void main()
{
    int n,power;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("enter the power you want to calculate: ");
    scanf("%d",&power);
    printf("%d",pow(n,power));
}
int pow(int n,int p)
{
    if(p==1)
      {
        return n;
      }
    else
    {
        return n*pow(n,p-1);
    }
}
