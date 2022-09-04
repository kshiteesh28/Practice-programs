#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int top,j,temp;
    int i,k,n,m=1001;

    scanf("%d",&n);

    int a[n],c[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);

        if(a[i]<m)
            m=a[i];
        else {
                j=i-1;
                temp=a[i];
                while(a[j]<temp && j>-1)
                {
                    a[j+1]=a[j];
                    j--;
                }
                a[j+1]=temp;
             }

    }

    k=0;top=i-1;

    while(top>=0)
    {
        c[k++] = top+1;
        for(i=0;i<=top;i++)
        {
            a[i]-=a[top];

        }
        while(a[top]==0)
            top--;
    }
    for(i=0;i<k;i++)
        printf("%d\n",c[i]);
    return 0;
}

