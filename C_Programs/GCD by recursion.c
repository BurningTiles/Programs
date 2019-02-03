#include<stdio.h>
int gcd(int A,int B)
{
	int temp=A%B;
	if (temp==0)
		return B;
	return gcd(B,temp);
}

int main()
{
	int X,Y;
	printf("\nEnter A and B : ");
	scanf(" %i %i",&X,&Y);
	printf("\n GCD = %i",gcd(X,Y));
	
	return 0;
}
