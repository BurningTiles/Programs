/*
    If you want multiple input in raw than use cin.ignore() function to ignore all old input values for each.
    I.E. if enter char in 1st variable than the enter of 1st will considered as input in second so to avoid it use it.
*/

#include <iostream>
using namespace std;
int main()
{
	char x[20],y[20];
	cin>>x;
	cin.ignore();
	cin>>y;
	cout<<endl<<x<<endl<<y;
	return 0;
}
