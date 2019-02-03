#include<stdio.h>

int main(void)
{
	int n;
	float a, c, f, k;
	printf("Chose unit of Temperature which you have \n 1. Celsius \n 2. Fahrenheit \n 3. Kelvin \n");
	scanf("%i",&n);
	if(n==1)
	{
		printf("Enter Temperature \n");
		scanf("%f",&a);
		f=((a*9)/5)+32;
		k=a+273.15;
		printf("Temperature is \n %f Fahrenheit \n      OR \n %f Kelvin \n",f,k);
	}
	else if(n==2)
	{
		printf("Enter Temperature \n");
		scanf("%f",&a);
		c=((a-32)*5)/9;
		k=c+273.15;
		printf("Temperature is \n %f Celsius \n      OR \n %f Kelvin \n",c,k);
	}
	else if(n==3)
	{
		printf("Enter Temperature \n");
		scanf("%f",&a);
		c=a-273.15;
		f=((c*9)/5)+32;
		printf("Temperature is \n %f Celsius \n      OR \n %f Fahrenheit \n",c,f);
	}
	else
	{
		printf("Invalid Entry \n");
	}
}
