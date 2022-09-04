//FACTORIAL OF A NUMBER WITH FUNCTIONS
#include <stdio.h>
int fact(int);
void main()
{
    int n;
    printf("enter the number to find out its factorial: ");
    scanf("%d",&n);
    fact(n); //function bulana
    //wo end hojayega
}//smjha? or 2nd?,program ko run kr k dekho
int fact(int a)
{
    int factorial=1,i; //us m hi work de sakta h printing ka
    for(i=1;i<=a;i++)
    {
        factorial*=i;
    }
    printf("the factorial of %d is %d",a,factorial); ////us m hi work de sakta h printing ka
    return 0;//fir call return ho k
}
//1) function bula k us m hi work de sakta h printing ka fir call return ho k wo end hojayega
