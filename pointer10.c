//TO SEARCH IN AN ARRAY WITH POINTER
#include<stdio.h>
void main()
{
    int i,n,*p,search,count=0;
    printf("enter the no. of array elements: ");
    scanf("%d",&n);
    int a[n];p=a;
    printf("enter the array elements: ");
    for(p=a;p<=&a[n-1];p++)
    {
        scanf("%d",p);
    }
    printf("\nYour array is: ");
    for(p=a;p<=(a+n-1);p++)
    {
        printf("%d ",*p);
    }
    p=a;
    printf("\nenter the number you want to search: ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(search == *(p+i))
        {
            printf("\n%d is found at the location %d",search,i+1);
            count++;
        }
    }
    if(count==0)
        printf("\nthe search element doesnt exist in the array");
}
