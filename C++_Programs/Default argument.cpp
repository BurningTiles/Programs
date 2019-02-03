//This program will show use of default argument.

#include <iostream>
using namespace std;

void me(int x,int y=0,int z=0)
{
	cout<<"\nsum is "<<x+y+z;
}

int main()
{
	me(5);
	me(6,2);
	me(1,2,4);
    return 0;
}
