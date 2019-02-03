#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <strings.h>

void coder(char x[],long int key)
{
	int  k_l,n,c,i,temp;
	long int t=key;

	c=key%15;

	k_l=(int)log10(key)+1;
	printf("\nCoded data :\n%c",k_l+33);

	for(n=1;n<=k_l;n++)
	{
        printf("%c",n+33+(t%10));
        t/=10;
	}
	for(i=1;x[i]!='\0';i++,n++)
	{
        temp=x[i]+c+(n%15);
        if(temp>126)
            temp-=95;
        printf("%c",temp);
	}
	printf("\n\n");
}


void decoder(char x[],long int key)
{
    int k_l,n,i,c,temp;
    long int t_k=0;

    k_l=x[1]-33;
    for(n=k_l+1;n>1;n--)
    {
        t_k=(t_k*10)+((x[n]-33)-(n-1));
    }

    if(key!=t_k)
    {
        printf("\nWrong pin\nTry again\n\n");
        return 0;
    }

    printf("\nDecoded text :\n");

    c=key%15;

    for(i=k_l+2;x[i]!='\0';i++)
    {
        temp=x[i]-c-(i%15)+1;
        if(temp<32)
            temp+=95;
        printf("%c",temp);
    }

    printf("\n\n");
}


int main()
{
    int z;
    long int key;
    printf("Choose anyone""\n""1.coder""\n""2.decoder""\n");
    scanf("%i",&z);

    if(z>2 || z<1)
    {
        printf("\nInvalid choice\nTry again\n\n");
        exit (0);
    }

    char StrOfTxt[201],b[5];

    printf("\nEnter pin\n");
    scanf("%li",&key);

    //scanf("%s",b);

    if(z==1)
        printf("\nEnter text (add \"//\" at end)\n");
    else
        printf("\nEnter coded data (add \"//\" at end)\n");

    //scanf("%c",b);
    scanf("%[^//]s",StrOfTxt);

    if(z==1)
        coder(StrOfTxt,key);
    else
        decoder(StrOfTxt,key);

    return 0;
}

/*

int main(void)
{
	char x[81];
	for(int i=1;i<6;i++)
	{
		strcpy(x,"");
		gets(x);
		coder(x);
		printf("\n\n");
	}
	return 0;
}

*/

