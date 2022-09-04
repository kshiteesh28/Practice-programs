//to check if even or odd
#include <stdio.h>
int num(int);
void main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    num(n);
}
int num(int a)
{
    (a%2==0)?printf("even"):printf("odd");
    return 0;

}
