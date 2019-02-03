#include<stdio.h>
void main()
{
	int n, sum=0, i=1;
	printf("Enter The value of n (ODD Number) \n");
	scanf("%d",&n);
	if(n%2==1)
    {
        for(i=1;i<=n;i=i+2)
        sum=sum+i;
        printf("Sum = %d \n\n\n",sum);
    }
    else
    {
        printf("Invalid Entry \n\n\n");
    }
}
