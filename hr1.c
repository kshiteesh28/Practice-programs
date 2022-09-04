#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,num[10];
    char s[1000],a[]={"0123456789"h};
    scanf("%[^\n]s",s);
    for(i=0;i<10;i++)
    {
     int count=0;
     a[i]=i;
        for(j=0;j<=strlen(s);j++)
        {

            if(a[i]==s[j])
            {
                printf("%c ",s[j]);
             count++;
            }
        }
        num[i]=count;
    }
    printf("\n\n");
    for(i=0;i<10;i++)
  {
        printf("%d ",num[i]);
  }
    return 0;
}
