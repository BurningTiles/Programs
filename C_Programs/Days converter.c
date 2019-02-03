#include<stdio.h>
void main()
{
	long long int a, b, c, d, e;
	printf("Enter number of Days \n");
	scanf("%lli",&a);
	b=a/365;
	c=a%365;
	d=c/30;
	e=c%30;
	printf("%lli Days = %lli Years %lli Months and %lli Days \n",a,b,d,e);
}
