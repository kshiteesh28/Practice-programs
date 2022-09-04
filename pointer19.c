//TO REVERSE A STRING WITH POINTER
#include <stdio.h>
#include <string.h>
char *rev(char *p1,char *p2,int l);
void main()
{
    char a[100],b[100],*p1=a,*p2=b;
    printf("enter your string: ");
    scanf("%[^\n]s",a);
    printf("\nentered string is %s",p1);

    p1=rev(p1,p2,strlen(a));
    printf("\nreverse of string is %s",p1);
}
char *rev(char *p1,char *p2,int l)
{
    for(int i=l;i>0;i--)
    {
        *(p2+l-i) = *(p1+i-1);
    }
    *(p2+l)='\0';
    return p2;
}
