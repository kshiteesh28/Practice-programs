//Challenging question 2
#include<stdio.h>
#include<math.h>
int main()
{
    printf("welcome back dono\n");
    int i=5;
    int kurama=20,shukaku=12,madara;
    while(kurama>0)
    {
        madara=1+shukaku;
        printf("beast is %d ",kurama-shukaku);
        printf("%d\n",kurama);
        kurama+=5;
        if(madara>=kurama)
        {
            shukaku=kurama+madara;
            printf("gaara is %d\n",shukaku);
        }
        printf("\n");
        kurama-=8;
    }
    return 0;
}
