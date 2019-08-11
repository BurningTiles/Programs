#include<stdio.h>
int main(void)
{
	int *p1,*p2,n,i;
	
	
	printf("\nEnter size : ");
	scanf("%i",&n);
	

	p1=(int*)malloc(10*sizeof(int));
	p2=(int*)calloc(10,sizeof(int));
	
	printf("For p1 (malloc)\n");
	
	
	for(i=0;i<n;i++)
	{
		printf("Element %i : ",i);
		scanf("%i",p1+i);
	}
	
	printf("\n\nElements in p1\n");
	
	for(i=0;i<n;i++)
	{
		printf("Element %i : %i\n",i,*(p1+i));
	}

	printf("\n\n\nFor p2 (calloc)\n");
	
	for(i=0;i<n;i++)
	{
		printf("Element %i : ",i);
		scanf("%i",p2+i);
	}
	
	printf("\n\nElements in p2\n");
	
	for(i=0;i<n;i++)
	{
		printf("Element %i : %i\n",i,*(p2+i));
	}
	

	return 0;
}
