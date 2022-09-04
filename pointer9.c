//TO SWAP 2 ARRAYS
#include <stdio.h>
void arrprint(int *k,int l);
void scan(int *s,int l);
int swap(int *j1,int *j2,int);
void main()
{
   int i,n,*p1,*p2;
   printf("\nenter no. of elements of the array: ");
   scanf("%d",&n);
   int a[n],b[n];
   p1=a;
   p2=b;
   printf("\nenter elements of A array: ");
   scan(p1,n);
   printf("\nenter elements of b array: ");
   scan(p2,n);

   printf("\nelements of the two arrays before swapping are: ");
   printf("\nA array: ");
   arrprint(p1,n);
   printf("\nB array: ");
   arrprint(p2,n);

   swap(&a,&b,n);
   printf("\nthe elements after swapping are: ");
   printf("\nA array: ");
   arrprint(p1,n);
   printf("\nB array: ");
   arrprint(p2,n);
}
void arrprint(int *k,int l)
{
    for(int i=0;i<l;i++)
    {
        printf("%d\t",*(k+i));
    }
}
void scan(int *s,int l)
{
    for(int i=0;i<l;i++)
   {
       scanf("%d",(s+i));
   }
}
int swap(int *j1,int *j2,int s1)
{
    int *p3,c[s1];
    p3=c;
    for(int i=0;i<s1;i++)
    {
      *(p3+i) = *(j1+i);
      *(j1+i) = *(j2+i);
      *(j2+i) = *(p3+i);
    }
    return 0;
}









