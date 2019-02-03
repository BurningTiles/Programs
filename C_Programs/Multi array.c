#include<stdio.h>
#define G 5
#define S 5
void main()
{
	int i,j;
	char x[G][S][21];
	
	printf("\nEnter Details : \n");
	for(i=0;i<G;i++)
	{
		printf("\n\nFor TEAM %i :\nTEAM name : ",i+1);
		gets(x[i][0]);
		for(j=1;j<S;j++)
		{
			printf("Player %i name : ",j);
			gets(x[i][j]);
		}
	}
	
	printf("\n\nPrinting List : \n\n");
	for(i=0;i<G;i++)
	{
		printf("\n\nTEAM %i :\nname : ",i+1);
		puts(x[i][0]);
		for(j=1;j<S;j++)
		{
			printf("Player %i name : ",j);
			puts(x[i][j]);
		}
	}

	return 0;
}
