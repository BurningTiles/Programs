#include<stdio.h>
#define size 20
void sort(int x[],int s,int e)
{
	if(e>s)
	{
		int i=s,index=s,temp;
		
		for(index;index<e;index++)
		{
			if(x[e]>x[index])
			{
				temp=x[index];
				x[index]=x[i];
				x[i++]=temp;
			}
		}
		temp=x[i];
		x[i]=x[e];
		x[e]=temp;
		sort(x,s,i-1);
		sort(x,i+1,e);
	}
}

int main()
{
	int x[size]={4,2,1,3,7,5,9,12,6,8,17,20,13,18,19,16,14,15,10,11};
	int l=0,h=size-1,index;
	sort(x,l,h);
	printf("\nData after sorting:\n---- ----- --------\nValues\n------\n{ ");
	for(index=0;index<size;index++)
		printf("%i ",x[index]);
	printf("}\n\n");
	
	return 0;
}
