//TO READ A VALUE AND PRINT ITS CORRESPONDING PERCENTAGE FROM 1% TO 100%
#include<stdio.h>
float percent();
float var,percentage,n;
int count=1;
void main()
{

    printf("Enter the number: ");
    scanf("%f",&n);
    var=n/100;
    percent();
}
float percent()
{
    if(count==101)
    {
        return 0;
    }
    else
    {
        percentage=var*count;
        printf("%3d percent of %g : %.2f\n",count,n,percentage);
        count++;
        percent();
    }
}
