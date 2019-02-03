#include<stdio.h>
#define N 10

int f=-1,r=-1,Q[N];

void qin()
{
	int tmp=r;
	if ((tmp+1)==N)
		tmp=0;
	else
		tmp++;
	if (f==tmp)
	{
		printf("\n\aOVERFLOW\n");
		return;
	}
	r=tmp;
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
	if(f==N)
		f=0;
	else
		f++;
	printf("\nValue : %i",temp);
}

void dis()
{
	int i;
	printf("\n\nValues in Queue :\n");
	if(f==-1)
	{
		printf("No VALUES.\n");
		return;
	}
	for(i=f;i!=r+1;i++)
	{
		if(i>=N)
			i=0;
		printf("%i  ",Q[i]);
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
