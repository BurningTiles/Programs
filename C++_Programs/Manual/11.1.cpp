/*
 * In this program it will illustrate copy constructor and how to use it.
 */
#include <iostream>  // Headers.
using namespace std;

class Vector{  // Vector class.
	public:
		Vector():real{0},img{0}{}  // Cosntructor without arguments.
		Vector(Vector &x){  // Copy constructor to copy values of same class object into it.
			real=x.real;  // Assigning values from object given in arguments.
			img=x.img;
		}
		Vector(int x,int y){  // Copy constructor to copy values of 2 int data.
			real=x;
			img=y;
		}
		void print(){  // To print the Vector.
			cout<<"Value of vector is ("<<real<<","<<img<<")"<<endl;
		}
	private:
		int real,img;  // Declaring the variable members.
};
int main(){
	Vector V(2,4); // Using copy constructor to copy integer values in object.
	Vector V1(4,6);  // Creating new object.
	Vector V2(V);  // Copy the values of the Vector V to the Vector V2.
	Vector V3=V1;  // Copy value of the Vector V1 to the Vector V3.
	cout<<endl<<"Printing values of vectors."<<endl;  // Printing values to check their values.
	V.print();
	V1.print();
	V2.print();
	V3.print();
	return 0;
}
