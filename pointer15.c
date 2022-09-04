//to copy one string into another with pointers
#include <stdio.h>
#include <string.h>
void main()
{
    char a[100],b[100],*p1,*p2;
    p1=a,p2=b;
    printf("enter string: ");
    scanf("%[^\n]s",a);
    printf("entered string is %s",a);

    for(int i=0;i<=strlen(a);i++)
    {
        *(p2+i) = *(p1+i);
    }
    printf("\ncopied string is %s",b);
}
