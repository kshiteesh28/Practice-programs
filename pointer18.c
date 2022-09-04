//TO COMPARE TWO STRINGS WITH POINTERS
#include <stdio.h>
#include <string.h>
void main()
{
    char a[100],b[100],*p1,*p2;
    printf("enter string 1: ");
    scanf("%s",a);
    printf("enter string 2: ");
    scanf("%s",b);
    p1=a;
    p2=b;
    printf("\n\n string 1 is %s",p1);
    printf("\n string 2 is %s",p2);
    int yo=0,m=strlen(a),n=strlen(b);
    printf(" \n %d  ",strcmp(p1,p2));
    if(m==n)
    {
        while(*p1==*p2)
        {
            yo++;
            p1++;
            p2++;
        }

        (yo==(m+1))?printf("\nstrings are equal"):printf("\nstrings are not equal!");
    }
    else
    {
        printf("\nstrings are not equal!!");
    }
}
