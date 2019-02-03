#include<stdio.h>

int main(void)
{
    int a, b, c;
    printf("\n\nEnter value of A\n");
    scanf("%i",&a);
    printf("\n\nEnter value of B\n");
    scanf("%i",&b);
    printf("\n\nEnter value of C\n");
    scanf("%i",&c);
    if(a<b)
    {
        if(a<c)
            printf("\n\nA = %i is smallest number\n\n\n",a);
        else if(a>c)
            printf("\n\nC = %i is smallest number\n\n\n",c);
        else
            printf("\n\nA = C = %i are smallest number\n\n\n",a);
    }
    else if(a>b)
    {
        if(c>b)
            printf("\n\nB = %i is smallest number\n\n\n",b);
        else if(c<b)
            printf("\n\nC = %i is smallest number\n\n\n",c);
        else
            printf("\n\nB = C = %i are smallest number\n\n\n",b);
    }
    else
    {
        if(a<c)
            printf("\n\nA = B = %i are smallest number\n\n\n",a);
        else if(a>c)
            printf("\n\nC = %i is smallest number\n\n\n",c);
        else
            printf("\n\nA = B = C = %i\n\n\n",a);
    }
}
