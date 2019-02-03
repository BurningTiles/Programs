#include<stdio.h>
void hanoi(int n,char source,char dest,char inter)
{
	if(n==1)
	{
		printf("\n Move Block %2i From %c To %c",n,source,dest);
		return;
	}
	hanoi(n-1,source,inter,dest);
	printf("\n Move Block %2i From %c To %c",n,source,dest);
	hanoi(n-1,inter,dest,source);
}
 
void main()
{
	int x;
	char A,B,C;
	printf("\nEnter Values :\nValue of N (No of disks) : ");
	scanf(" %i",&x);
	printf("\n(Enter only one Character name)\nSource Rod : ");
	scanf(" %c",&A);
	printf("Destination Rod : ");
	scanf(" %c",&B);
	printf("Extra Rod : ");
	scanf(" %c",&C);
	hanoi(x,A,B,C);
	printf("\n\n");
}
