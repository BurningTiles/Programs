#include<stdio.h>

int main(void)
{
	int p, n;
	float r, i;
	printf("Enter Principle Amount \n");
	scanf("%i",&p);
	printf("Enter Rate of Interest in Percentage \n");
	scanf("%f",&r);
	printf("Enter Number of Months \n");
	scanf("%i",&n);
	i=p*r*n/100;
	printf("Interest Value is %f \n",i);
}
