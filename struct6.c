//C Program to Add Two Distances (in inch-feet system) using Structures

#include <stdio.h>
typedef struct feet_inch{
float feet;
float inch;
}addDistance;

addDistance total(addDistance dist[2],addDistance sum);
void main()
{
    addDistance dist[2],sum;
    printf("enter the two distances");
    for(int i=0;i<2;i++)
    {
        printf("\nenter feet of measurement %d:",i+1);
        scanf("%f",&dist[i].feet);
        printf("\nenter inch of measurement %d:",i+1);
        scanf("%f",&dist[i].inch);
    }
    sum=total(dist,sum);
    printf("\n\nsum of distances = %g'-%g\"",sum.feet,sum.inch);
}
addDistance total(addDistance dist[2],addDistance sum)
{
    sum.feet=dist[0].feet+dist[1].feet;
    sum.inch=dist[1].inch+dist[0].inch;
    while(sum.inch>=12)
    {
        sum.inch-=12;
        sum.feet++;
    }
    return sum;
}
