#include<stdio.h>
void main()
{
    double sum=0, n, i=1;
	printf("Enter The value of n \n");
	scanf("%lf",&n);
	for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    printf("Sum = %.2lf \n\n\n",sum);
}
