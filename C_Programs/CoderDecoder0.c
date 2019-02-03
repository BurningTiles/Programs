#include <stdio.h>
#include <string.h>

void coder(char x[])
{
    int m;
    for(int i=0;x[i]!='\0';i++)
    {
        m=x[i]+15;
        if(m>126)
        {
            m=m-126+31;
        }
        x[i]=m;
    }
    printf("%s",x);
}

void decoder(char x[])
{
    int m;
    for(int i=0;x[i]!='\0';i++)
    {
        m=x[i]-15;
        if(m<32)
        {
            m=m+126-31;
        }
        x[i]=m;
    }
    printf("%s",x);
}

int main()
{
    int z;
    printf("Choose anyone\n1.coder\n2.decoder\n");
    scanf("%i",&z);

    char x[81];

    if(z==1)
    {
        printf("Enter text\n");
        scanf("%[^\n]s",x);
        printf("\n\nCoded data is:\n\n");
        coder(x);
    }
    else if(z==2)
    {
        printf("Enter coded data\n");
        scanf("%[^\n]s",x);
        printf("\n\nDecoded text is:\n\n");
        coder(x);
    }
    else
    {
        printf("Enter valid choice");
    }

    printf("\n\n");

    return 0;
}
