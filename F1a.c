//chlo ek program bnao addition ka
#include<stdio.h>
int multi(int,int); // idhr hi rkh skte h kya?
float subtract(int,int);
void main()
{
    int gadha,chudale;
    printf("enter two numbers: ");
    scanf("%d%d",&gadha,&chudale);
    multi(gadha,chudale);
    subtract(gadha,chudale);

    //values idhr print kro!!!??
}
int multi(int kutta,int aalsi)
{
    int n;    //oyee
    n= kutta*aalsi;//idhr firse wahi function kyu bulaya ,recursion krna h?? h?  idhr formula lgana ,huu krooo
    printf("product of two number is %d\n",n); //done,mstt  aba sbecOND? case,second case 2 minn
}
float subtract(int kutta,int aalsi) //oyee,kroo
{
  float m;
  m= kutta-aalsi;
  printf("diff of two number is %f",m);
         return;
}
