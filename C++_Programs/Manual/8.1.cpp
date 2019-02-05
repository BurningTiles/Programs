/*
 * This program is to show basics of class.
 * In this program class BOX is created and have length, width and height as parameter.
 */

#include<iostream>  // Header files
using namespace std;

class BOX{  // Box Function.
	private:  // Access-specifier
		int length, width, height;  // Declaring length, width and height variable for Box.
	public:  // Access-specifier
		void set(int a,int b,int c){  // Function to set values in object.
			length=a;
			width=b;
			height=c;
		}
		void print();  // Function to print object values.
}object1;  // Declaring object1 inside the class.

void BOX::print(){  // Function definition outside the class.
	cout<<"Dimentions of Box is "<<length<<" x "<<width<<" x "<<height<<endl;
}

int main()  // Main function.
{
	BOX object2;  // Declaring object2 outside the class.
	int t1,t2,t3;  // Temparary variables.
	cout<<"\nEnter dimentions for Box1/object1 : ";
	cin>>t1>>t2>>t3;  // Get value for object1 in temp.
	object1.set(t1,t2,t3);  // Calling set function of object1.
	cout<<"\nENter dimentions for Box2/object2 : ";
	cin>>t1>>t2>>t3;  // Get value for object2 in temp.
	object2.set(t1,t2,t3);  // Calling set function of object1.
	cout<<"\nFor box1 : \n";
	object1.print();  // Printing object1
	cout<<"\nFor box2 : \n";
	object2.print();  // Printing object2
	return 0;
}
	
