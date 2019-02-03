#include<stdio.h>
void main()
{
	long long int n, i=1, x, x1=0, x2=1;
	printf("Enter value of n \n");
	scanf("%lli",&n);
	printf("\n\nFibonacci Series = ");
	for(i=1;i<=n;i++)
    {
        printf(" %lli ",x1);
        x=x1+x2;
        x1=x2;
        x2=x;
    }
    printf("\n\n\n");
}
