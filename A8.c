//TO FIND A NUMBER BY BINARY SEARCH
#include <stdio.h>
void main()
{
    int i,j,n,search,temp,first,last,middle;
    printf("enter the no. of elements of array ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the elements youve entered are ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nthe sorted elements are ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

   printf("\nenter the value you want to search ");
   scanf("%d",&search);
   first=0;
   last=n-1;
   middle=(first+last)/2;
   while(first<=last)
   {
       if(a[middle]<search)
       {
           first=middle+1;
       }
       else if(a[middle]==search)
       {
           printf("%d is found at the location %d ",search,middle+1);break;
       }
       else
       {
           last=middle-1;
       }
       middle=(first+last)/2;
   }
   if(first>last)
    printf("not found in the list\ntataaaaaaa");

}
