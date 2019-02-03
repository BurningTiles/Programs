#include<stdio.h>

int main(void)
{
    int n, x=0, z, i;
    printf("\nEnter the Number\n");
    scanf("%i",&n);
    i=n;
    while(i!=0)
    {
        z=i%10;
        x=x*10+z;
        i/=10;
    }
    if(x==n)
        printf("Given number is Palindrome\n\n\n");
    else
        printf("Given number is Non-Palindrome\n\n\n");
}
