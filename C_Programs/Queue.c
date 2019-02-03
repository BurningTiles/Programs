#include<stdio.h>
#define N 10

int f=-1,r=-1,Q[N];

void qin()
{
	if ((r+1)==N)
	{
		printf("\n\aOVERFLOW\n");
		return;
	}
	else
		r++;
	printf("Enter Value : ");
	scanf(" %i",&Q[r]);
	if (f==-1)
		f=0;
}

void qout()
{
	if(f==-1)
	{
		printf("\n\aUNDERFLOW\n");
		return;
	}
	int temp;
	temp=Q[f];
	if (f==r)
	{
		f=-1;
		r=-1;
		printf("Value : %i",temp);
		return;
	}
	f++;
	printf("\nValue : %i",temp);
}

void dis()
{
	int i=f;
	printf("\nValues in Queue :\n");
	while((i-1)!=r)
	{
		printf("%i   ",Q[i]);
		i++;
	}
	printf("\n\n");
}

int main()
{
	int w;
	printf("\nTo exit press 0 :\n");
	for(;;)
	{
		printf("\nChoose Operation : \n1.QINSERT   2.QDELETE   3.DISPLAY\n");
		scanf(" %i",&w);
		if(w==0)
		break;
		switch(w)
		{
			case 1: qin(); break;
			case 2: qout(); break;
			case 3: dis(); break;
			default : printf("\nEnter valid choice.\n");
		}
	}
	return 0;
}
