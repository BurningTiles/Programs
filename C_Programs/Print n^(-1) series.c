#include<stdio.h>
void main()
{
    int sum=0, n, i=1;
	printf("Enter The value of n \n");
	scanf("%d",&n);
	printf("Series is  ");
	for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            printf("1 + ");
        }
        else if(i==n)
        {
            printf("1/%d",i);
        }
        else
        {
            printf("1/%d + ",i);
        }
    }
    printf(" \n\n");
}
