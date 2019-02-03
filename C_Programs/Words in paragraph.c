#include<stdio.h>
#include<stdbool.h>



bool alphabetic(const char c)
{
    if (( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' ))
        return true;
    else
        return false;
}



void readline(char buffer[])
{
    char character;
    int i=0;

    do
    {
        character = getchar ();
        buffer[i] = character;
        ++i;
    }
    while ( character != '\n' );

    buffer[i-1] = '\0';
}



int countwords(const char string[])
{
    int i, wordcount=0;
    bool lookingforword=true , alphabetic( const char c ) ;

    for (i=0; string[i] != '\0' ; ++i)
    {
        if (alphabetic(string[i]))
        {
            if (lookingforword)
            {
                ++wordcount;
                lookingforword = false;
            }
        }
        else
            lookingforword=true;
    }

    return wordcount;
}


int main(void)
{
	char text[81];
	int totalwords=0;
	int countwords(const char string[]);
	void readline (char buffer[]);
	bool endoftext=false;

	printf("Type in your text. \n");
	printf("When you're done, press 'RETURN'.\n\n");



	while( ! endoftext )
	{

        readline (text);

	    if (text[0] == '\0')
	        endoftext = true;
	    else
	        totalwords += countwords(text);
	}

	printf ("\n There are %i worlds in the above text.\n", totalwords);

	return 0;
}


