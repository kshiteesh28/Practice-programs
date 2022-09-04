//to calculate sum of complex number
#include <Stdio.h>
typedef struct complexSum
{
    float real;
    float imaginary;
}sum;
void addComplex(sum num[2],sum add);
void main()
{
    sum num[2],add;
    printf("enter the two complex numbers: ");
    for(int i=0;i<2;i++)
    {
        printf("\nenter real and imaginary part for num%d ",i+1);
        scanf("%f%f",&num[i].real,&num[i].imaginary);
    }
    printf("\nthe sum is: ");
    addComplex(num,add);
}
void addComplex(sum num[2],sum add)
{
    add.real=num[0].real+num[1].real;
    add.imaginary=num[0].imaginary+num[1].imaginary;
    printf("%g+%gi",add.real,add.imaginary);
}
