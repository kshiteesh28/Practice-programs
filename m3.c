#include<stdio.h>

void main()
{
    char a[100],b[100],*s1,*s2;
    printf("Enter your string s1: ");
    scanf("%[^\n]s",a);
    s1=a;
    s2=b;
    int n=strlen(a);
    printf("\n\nOriginal string A: ");

    for(int i=0;i<n;i++)
    {
        *(s2+i)= *(s1+i);
    }

    printf("\n\nCopied string B: ");

    printf("\n\n");

    printf("a is %s",a);
    printf("\nb is %s",b);
}
