//TO COUNT NUMBER OF DIGITS
#include <stdio.h>
int count(int);
void main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("%d has %d digits",n,count(n));
}
int count(n)
{
    if(n<10)
    {
        return 1;
    }
    else
    {
        return 1+count(n/10);
    }
}
