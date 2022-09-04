//TO CHECK WHETHER A NUMBER IS PRIME,ARMSTRONG OR PERFECT
#include <stdio.h>
int prime(int);
int perfect(int);
int armstrong(int);
void main()
{
    int n;
    printf("Enter the number to check for prime,armstrong or perfect ");
    scanf("%d",&n);
    prime(n);
    perfect(n);
    armstrong(n);
}
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    (count>2)?printf("\nnot prime"):printf("\nprime");
    return 0;
}
int perfect(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    (n==sum)?printf("\nperfect number"):printf("\nnot perfect number");
    return 0;
}
int armstrong
{
    bn
}
