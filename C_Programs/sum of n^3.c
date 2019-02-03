#include<stdio.h>
void main()
{
	int n, sum=0, i=1;
	printf("Enter The value of n \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    sum=sum+(i*i*i);
    printf("Sum = %d \n\n\n",sum);
}
