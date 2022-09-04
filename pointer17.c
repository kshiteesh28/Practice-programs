//CONCATENATE A STRING WITH POINTER
#include <stdio.h>
#include <string.h>
void main()
{
    char a[100],b[100],c[200],*p1,*p2,*p3;
    p1=a;
    p2=b;
    p3=c;
    printf("enter first string: ");
    scanf("%[^\n]s",a);
    printf("enter second string: ");
    scanf("%s",b);
    int i,m=strlen(a),n=strlen(b);
    for(i=0;i<m;i++)
    {
        *p3 = *p1;
        p1++;
        p3++;
    }
    for(i=0;i<=n;i++)
    {
        *p3 = *p2;
        p2++;
        p3++;
    }
    p1=a;
    p2=b;
    p3=c;
    printf("\n\nstring 1 is %s",p1);
    printf("\nstring 2 is %s",p2);
    printf("\n\nconcatenated string is %s\n",p3);
}
