#include<stdio.h>

int main(void)
{
	float a, b, m, d, s, p;
	printf("Enter Values of A & B \n");
	scanf("%f %f",&a,&b);
	p=a+b;
	s=a-b;
	m=a*b;
	d=a/b;
	printf("Sum = %f \n",p);
	printf("Substraction = %f \n",s);
	printf("Multiplication = %f \n",m);
	printf("Division = %f \n",d);
	return 0;
}
