#include<stdio.h>

int main(void)
{
	long long int a, b;
	printf("Enter value of A \n");
	scanf("%lli",&a);
	printf("Enter value of B \n");
	scanf("%lli",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("New Value of A = %lli and B = %lli \n",a,b);
}
