#include<stdio.h>
#define size 20

void merge(int x[],int l,int m,int h)
{
	int la=m-l+1,lb=h-m;
	int a[la],b[lb],i,j;
	for(i=0;i<la;i++)
		a[i]=x[l+i];
	for(j=0;j<lb;j++)
		b[j]=x[m+j+1];

	for(i=0,j=0;l<=h;l++)
	{
		if(i<la && j<lb)
		{
			if(a[i]<b[j])
				x[l]=a[i++];
			else
				x[l]=b[j++];
		}
		else
		{
			if(i<la)
				x[l]=a[i++];
			else
				x[l]=b[j++];
		}
	}
}
void sort(int x[],int l,int h)
{
	if(h>l)
	{
		int m=(l+h)/2;
		sort(x,l,m);
		sort(x,m+1,h);
		merge(x,l,m,h);
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
