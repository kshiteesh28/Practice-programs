#include<stdio.h>
void main()
{
    char a[100],b[100],c[200];
    printf("Enter string 1: ");
    scanf("%s",a);
    printf("Enter string 2: ");
    scanf("%s",b);
    printf("Your strings are:\nString1: %s\nString 2: %s",a,b);
    int i=0,j=0,counta=0,countb=0;

    while(a[i]!='\0')
    {
        counta++;
        i++;
    }
    while(b[j]!='\0')
    {
        countb++;
        j++;
    }

    a[counta]=' ';

    for(i=0;i<=counta;i++)
    {
        c[i]=a[i];
    }
    for(i=counta+1;i<=countb+counta;i++)
    {
        c[i]=b[i-(counta+1)];
    }

        printf("\nconcatenated string is %s",c);
}

