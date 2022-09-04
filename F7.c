//TO PRINT MAX AND MIN OF TWO NUMBERS
#include <stdio.h>
int mini(int a,int b)
{
     if(a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int maxi(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
void main()
{
    int a,b,max,min;
    printf("enter the two numbers: ");
    scanf("%d%d",&a,&b);
    max=maxi(a,b);
    min=mini(a,b);
    printf("max number is %d\n",max);
    printf("min number is %d",min);
}
