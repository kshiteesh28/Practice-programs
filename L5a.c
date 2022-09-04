//EVEN NUMBERS FROM M TO N WITH ENTRIES N,M
#include<stdio.h>
void main()
{
    int m,n;
    printf("enter the numbers you want for the pattern ");
    scanf("%d%d",&m,&n);
    for(int i=n;i>=m;i--)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
}
