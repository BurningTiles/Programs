#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(void)
{
    long long int num, i, y, z, m, x;
    printf("Enter value of N\n");
    scanf("%lli",&num);
    printf("\nArmstrong numbers are\n");
    for(i=0;i<=num;i++)
    {
        z=0;
        y=0;
        x=i;
        while(x!=0)
        {
            x/=10;
            ++y;
        }
        x=i;
        while(x!=0)
        {
            m=x%10;
            z=z+pow(m,y);
            x/=10;
        }
        if(z==i)
        {
            printf("%lli  ",i);
        }
    }
    printf("\n\n\n");
    getch();
}
