#include<stdio.h>
#include<conio.h>
#define N 10
int stack[N],top=-1;

void push()
{
	int x;
	if(top+1>=N)
	{
		printf("\nStack Overflow\n");
		return;
	}
	top++;
	printf("Enter Value : ");
	scanf("%i",&x);
	stack[top]=x;
}

void pop()
{
	if(top<0)
	{
		printf("\nStack Underflow\n");
		return ;
	}
	printf("%i",stack[top--]);
}

void peep()
{
	int i;
	printf("Enter Element NO :");
	scanf("%i",&i);
	if(top-i+1<0)
	{
		printf("\n\nStack underflow (No element)\n");
		return ;
	}
	printf("%i",stack[top-i+1]);
}

void change()
{
	int x,i;
	printf("Enter Element NO and Value :");
	scanf("%i%i",&i,&x);
	if(top-i+1<0)
	{
		printf("\n\nStack underflow (No element)\n");
		return;
	}
	stack[top-i+1]=x;
	return;
}

void display()
{
	int i;
	printf("\n");
	for(i=0;i<=top;i++)
	{
		printf("Element %3i : %i\n",i,stack[i]);
	}
}

int main()
{
	int w;
	printf("\nTo exit press 0 :\n");
	for(;;)
	{
		printf("\nChoose Operation : \n1.PUSH      2.POP       3.PEEP      4.CHANGE    5.DISPLAY\n");
		scanf(" %i",&w);
		if(w==0)
		break;
		switch(w)
		{
			case 1: push(); break;
			case 2: pop(); break;
			case 3: peep(); break;
			case 4: change(); break;
			case 5: display(); break;
			default : printf("\nEnter valid choice.\n");
		}
	}
	return 0;
}
