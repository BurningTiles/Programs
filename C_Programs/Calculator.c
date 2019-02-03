#include<stdio.h>

int main(void)
{
    long long int A, B, x;
    printf("\nChoose type of calculation\n\n1. Plus(+)             2. Minus(-)\n3. Multiplication(x)   4. Divide(/)\n5. Modulo(%%) \n\n");
    scanf("%lli",&x);
    if(x<6 && x>0)
    {
        printf("\nEnter the value of A and B\n");
        scanf("%lli %lli",&A,&B);
        switch(x)
        {
            case 1:
                printf("\nA + B = %lli",A+B);
                break;
            case 2:
                printf("\nA - B = %lli",A-B);
                break;
            case 3:
                printf("\nA x B = %lli",A*B);
                break;
            case 4:
                printf("\nA / B = %lli",A/B);
                break;
            case 5:
                printf("\nA %% B = %lli",A%B);
                break;
        }
        printf("\n\n");
    }
    else
    {
        printf("\nInvalid Entry\n\n");
    }
}
