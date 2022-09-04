//WAP to compare 2 strings
#include<stdio.h>
void main()
{
    char a[100],b[100]; int counta=0,countb=0;int i=0; int x=0;
    printf("String 1: ");
    scanf("%[^\n]s",a);
    printf("String 2: ");
    scanf("%s",b);
    printf("\n\nYour strings are:\nString 1: %s\nString 2: %s",a,b);

     while(a[i]!='\0')
    {
        counta++;
        i++;
    }
    i=0;
    while(b[i]!='\0')
    {
        countb++;
        i++;
    }
    if(counta==countb)
    {
        for(i=0;i<counta;i++)
        {
            if(a[i]!=b[i])
            {
                printf("\n\nStrings are not equal\n"); x++;break;
            }
        }
        if(x==0)
            printf("\n\nStrings are equal\n");
    }
    else
    {
        printf("\n\nStrings are not equal\n");
    }
}


