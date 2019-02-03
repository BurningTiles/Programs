#include<stdio.h>

int main(void)
{
	float a, m, f, i, cm;
	printf("Enter Km \n");
	scanf("%f",&a);
	m=a*1000;
	f=m*3.28084;
	i=f*12;
	cm=a*100000;
	printf("%f Km (Kilometers) = \n",a);
	printf("%f Meters \n",m);
	printf("%f Feet \n",f);
	printf("%f Inches \n",i);
	printf("%f Centemeters \n",cm);
}
