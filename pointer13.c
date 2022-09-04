//EXPERIMENT
#include<stdio.h>
void main()
{
    int *p;
    printf("experiment");

    int a[2][3]={{11,22,66},{44,55,86}};
    p=a;
    printf("\n%d", *(p));
    p++;
    printf("\n%d", *(p));
        p++;
    printf("\n%d", *(p));
        p++;
    printf("\n%d", *(p));
        p++;
    printf("\n%d", *(p));
        p++;
    printf("\n%d", *(*(a)+4));

}
