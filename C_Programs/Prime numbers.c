#include<stdio.h>

int main(void)
{
    int n, i, x, z;
    printf("Enter value of N\n");
    scanf("%i",&n);
    printf("\n\nFirst N prime numbers are\n");
    for(i=2;i<=n;i++)
    {
        z=0;
        for(x=2;x<=i/2;x++)
        {
            if(i%x==0)
            {
                z=z+1;
            }
        }
        if(z==0)
        {
            printf("%i  ",i);
        }
    }
    printf("\n\n\n");

}
