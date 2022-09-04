//to find length of a string with pointers
#include <stdio.h>
void main()
{
    int count=0;
    char *a;
    printf("enter your string: ");
    scanf("%[^\n]s",a);
    char *p=a;
    while(*p!='\0')
    {
        printf("%c",*p);
        count++;
        p++;
    }
    printf("\nthe string length is %d",count);
}
