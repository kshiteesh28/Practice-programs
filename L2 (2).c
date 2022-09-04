//TO DISPLAY NUMBERS FROM 1 TO N
#include <stdio.h>
void main()
{
    int i,n,sum=0;
    printf("enter n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        printf("%d\n",(sum+i));
    }
}
