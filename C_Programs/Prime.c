#include<stdio.h>

int main()
{
    int x;
    printf("Enter Value : ");
    scanf("%i",&x);
    if(x<2)
    {
        printf("Not a prime number.");
        return 0;
    }
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            printf("\nNot a prime number");
            return 0;
        }
    }
    printf("\nNumber is prime");

    return 0;
}
