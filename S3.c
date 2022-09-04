//TO CONCATENATE A STRING
#include <stdio.h>
void main()
{
    int i=0,count=0;
    char s1[100],s2[100],s3[200];
    printf("enter string1 : ");
    scanf("%[^\n]s",s1);
    printf("enter string2 : ");
    scanf("%s",s2);
    while(s1[i]!='\0')
    {
        s3[i]=s1[i];
        count++;
        i++;
    }
    s3[i]=' ';
    i=0;
    while(s2[i]!='\0')
    {
        count++;
        s3[count]=s2[i];
        i++;
    }
    s3[++count]='\0';
    printf("\nthe concatenated string is %s",s3);
}
