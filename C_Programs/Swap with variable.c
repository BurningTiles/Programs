#include<stdio.h>

int main(void)
{
	long long int a, b, c;
	printf("Enter value of A \n");
	scanf("%lli",&a);
	printf("Enter value of B \n");
	scanf("%lli",&b);
	c=a;
	a=b;
	b=c;
	printf("New Value of A = %lli and B = %lli \n",a,b);
}
