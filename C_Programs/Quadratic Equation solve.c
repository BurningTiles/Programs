#include<stdio.h>
#include<math.h>

int main(void)
{
	double a, b, c, d, r1, r2, rp, ip;
	printf("This Program will solve Quadratic Equation \n\n\n");
	printf("Enter a \n");
	scanf("%lf",&a);
	printf("Enter b \n");
	scanf("%lf",&b);
	printf("Enter c \n");
	scanf("%lf",&c);
	d=(b*b)-(4*a*c);
	if(d<0)
	{
		rp=-b/(2*a);
		ip=sqrt(-d)/(2*a);
		printf("Root 1 = %lf + %lf \nRoot 2 = %lf - %lf",rp,ip,rp,ip);
	}
	else if(d==0)
	{
		r1=r2=-b/(2*a);
		printf("Root 1 = Root 2 = %lf",r1);
	}
	else
	{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("Root 1 = %lf \nRoot 2 = %lf \n\n",r1,r2);
	}
}
