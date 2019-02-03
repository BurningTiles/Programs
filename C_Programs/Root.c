#include<stdio.h>
#define e 0.0001

float absolute(float x)
{
    if((x)<0)
        return -(x);
    else
        return (x);
}

float root(float x)
{
    float ans=1,temp;
    while(absolute((ans*ans)-x)>=e)
    {
        temp=x/ans;
        ans=(ans+temp)/2;
    }
    return ans;
}

int main(void)
{
    float x;
    printf("\nEnter value : ");
    scanf("%f",&x);
    printf("\n%.3f",root(x));

    return 0;
}
