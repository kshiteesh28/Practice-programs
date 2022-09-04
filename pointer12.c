//MATRIX ADDITION WITH POINTER
#include<stdio.h>
int m,n;
void scan(int *p,int l);
void arrprint(int k[m][n]);
void add(int *p1,int *p2,int *p3,int l);
void main()
{
    printf("\nenter number of rows and columns: ");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],c[m][n];
    int *p1=a,*p2=b,*p3=c;
    printf("\nenter elements of first matrix: ");
    scan(p1,m*n);
    printf("\nenter elements of second matrix: ");
    scan(p2,m*n);

    printf("\nthe elements of first matrix are: ");
    arrprint(a);
    printf("\nthe elements of second matrix are: ");
    arrprint(b);

    add(p1,p2,p3,m*n);
    printf("\nthe sum matrix is : ");
    arrprint(c);
}
void scan(int *p,int l)
{
    for(int i=0;i<l;i++)
    {
        scanf("%d",p);
        p++;
    }
}
void arrprint(int k[m][n])
{
    for(int i=0;i<m;i++)
    {
        printf("\n");
       for(int j=0;j<n;j++)
       {
           printf("\t%d", * ( * (k+i)+j));
       }
    }
}
void add(int *p1,int *p2,int *p3,int l)
{
  for(int i=0;i<l;i++)
  {
     ( * (p3+i)) = ( * (p1+i))+( * (p2+i));
  }
}





