/*
    There is huge difference between reference and pointer in c++ and
    reference is not available in c but pointer in c is also known as reference.
*/
#include <iostream>
using namespace std;
int main()
{
	int x=100;
	int &y=x;  // Declaring reference to x.
	/*using reference to x.
	it means address of x and y is same
	so simply y takes same address which x have
	so when you use y or x it will work on same address.
	*/
	int *z=&x;  // Declaring pointer to c.
	/*
	Using pointer to x so here the value of z is address of x
	so when you use z it will give address of x and *z will give value of x
	*/

	cout<<x<<"\t"<<y<<"\t"<<*z<<"\t"<<z<<endl;

	x=99;
	cout<<x<<"\t"<<y<<"\t"<<*z<<"\t"<<z<<endl;

	y=98; //y have same address as x so any changes will be applied on that address so changes can see through x also.
	cout<<x<<"\t"<<y<<"\t"<<*z<<"\t"<<z<<endl;

	*z=97; //here you're assigning value at address which is stored in value of z.
	cout<<x<<"\t"<<y<<"\t"<<*z<<"\t"<<z<<endl;

	return 0;
}
