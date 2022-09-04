#include  <stdio.h>
void main()
{
    int a,b;
    printf("Test for Corona virus \nenter your age ");
    scanf("%d",&a);

    if(a>65)
    {
        printf("stay at home!!");
    }
    if(a<=65)
    {
        printf("do you have a good immune system?\npress 1 for yes or 2 for no\n");

        scanf("%d",&b);

        if(b==1)

        printf("stay at home");

        if(b==2)

        printf("stay at home!");
    }

}
