/*
 * This program is for checking the input number for odd or even.
 */

#include<iostream>  // Header files.
using namespace std;

int main()
{
	int x; // Declaring a int type variable for input.
	cout<<"Enter any number : ";  
	cin>>x;  // Get number from the user.
	(x%2==0)? cout<<endl<<x<<" is even number."<<endl: cout<<endl<<x<<" is odd number."<<endl;  // Using conditional operator to check given number and give output.
	return 0;
}
