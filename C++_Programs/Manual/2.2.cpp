/*
 * This program is for basic calculation of 2 numbers.
 */

#include <iostream>  // Header files.
using namespace std;  //

float cal(float x,float y,char c)  // Function to return the answer as per requirement.
{
	switch(c)  // Using switch case for selection of operation.
	{
		case '1': return x+y;  // Here it will directly return the answer so requirement of "break" keyword.
		case '2': return x-y;
		case '3': return x*y;
		case '4': return x/y;
		default:  // If given input is not correct.
			cout<<"\nEnter valid choice.\n";
	}
	return 0;  // Returning 0 if the input is not correct.
}

int main()  // Main
{
	float a,b,ans;  // Declaring 2 variables of integer type
	char c;  // Declaring 1 character type variable for operation selection.
	cout<<"Select operation : "<<endl  // Menu for user to select operation
		<<"1: Addition	2: Subtraction"<<endl
		<<"3: Multiply  4: Division \n : ";
	cin>>c;  // Get value of operation
	cout<<"\nEnter 2 numbers : ";
	cin>>a>>b;  // Get 2 numbers.
	ans=cal(a,b,c);
	cout<<"\nAns = "<<ans;  
}
