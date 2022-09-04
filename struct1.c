//Write a C program to add two fractions and display the result fraction.
// Your program will prompt the user to input fraction 1 and fraction 2.
//The numerator and denominator of each fraction are input separately by space
#include <stdio.h>
typedef struct
{
  int num,deno;
}fract;
fract f1,f2,answer;

fract sum_of_fractions(fract,fract);
void main()
{
 printf("enter numerator and denominator of first number: ");
 scanf("%d%d",&f1.num,&f1.deno);
 printf("enter numerator and denominator of second number: ");
 scanf("%d%d",&f2.num,&f2.deno);

 answer=sum_of_fractions(f1,f2);
 printf("the sum is %d/%d",answer.num,answer.deno);
 }
fract sum_of_fractions(fract f1,fract f2)
{
    fract answer={((f1.num*f2.deno)+(f2.num*f1.deno)),(f1.deno*f2.deno)};
    return answer;
}

