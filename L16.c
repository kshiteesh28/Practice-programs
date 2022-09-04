//TO SWAP FIRST AND LAST DIGIT OF A NUMBER
#include <stdio.h>
#include <math.h>
void main()
{
    int swappednum,num,firstdigit,lastdigit,digits;
    printf("enter the number ");
    scanf("%d",&num);
    lastdigit=num%10;
    digits=log10(num);

    firstdigit=num/pow(10,digits);
    swappednum=lastdigit;
    swappednum*=pow(10,digits);
    swappednum+=(num%(int)(pow(10,digits)));
    swappednum-=lastdigit;
    swappednum+=firstdigit;

    printf("the swapped number is %d",swappednum);

}
