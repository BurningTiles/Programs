#include<stdio.h>

int main(void)

{
    long long int n;
    printf("Enter the number\n");
    scanf("%lli",&n);
    printf("\nReverse number is ");
    do
    {
        printf("%d",n%10);
        n/=10;
    }
    while(n!=0);
    printf("\n\n\n");
}
