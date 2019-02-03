#include<stdio.h>

int main(void)
{
	int n,x=0,i;
	printf("Enter number of values\n");
	scanf("%i",&n);
	int a[n+1];
	printf("Enter values\n");
	for(i=1;i<=n;i++)
    {
        scanf("%i",&a[i]);
        x+=a[i];
    }
    printf("Total of given values = %i\nAverage of given values = %i\n\n\n",x,x/n);
    return 0;
}
