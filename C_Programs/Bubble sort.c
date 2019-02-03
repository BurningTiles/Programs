#include<stdio.h>
#define N 20

void sort(int x[],int length)
{
	int index,i,tmp;
	for(index=0;index<length;index++)
	{
		for (i=0;i<(length-index-1);i++)
		{
			if(x[i]>x[i+1])
			{
				tmp=x[i];
				x[i]=x[i+1];
				x[i+1]=tmp;
			}
		}
	}
}

void print(int x[],int length)
{
	int i;
	printf("\n\nData after sorting.\n{  ");
	for(i=0;i<length;i++)
	{
		printf("%i  ",x[i]);
	}
	printf("}\n\n");
}

int main(void)
{
	int a[N]={3,5,7,1,8,4,9,2,13,18,11,10,6,12,16,14,19,17,15,20};
	
	sort(a,N);
	print(a,N);
	
	return 0;
}
