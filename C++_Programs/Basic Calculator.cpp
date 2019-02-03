/*
    This programm is for basic calculations.
    It's too easy so need detailed discription.
*/

#include <iostream>
using namespace std;

float cal(float x,float y,char c) // Function for calculating answer.
{
	switch(c) // Switch for character.
	{
		case '+': return x+y;
		case '-': return x-y;
		case '*': return x*y;
		case '/': return x/y;
		default:
			cout<<"\nEnter valid equation.\n";
	}
	return 0;
}

int main()
{
	float a,b;
	char c;
	cout<<"\nEnter equation : ";
	cin>>a>>c>>b;
	cout<<"Ans = "<<cal(a,b,c)<<endl;
	return 0;
}
