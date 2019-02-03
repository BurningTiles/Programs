#include <stdio.h>
int main()
{
	long x=12;
	//for(int i=1;i<8;i++)
	while(x!=0){
	printf("%i",x&1);
	x=x>>1;
	}
}
