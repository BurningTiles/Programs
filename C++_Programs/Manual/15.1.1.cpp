/*
 * This program is to demonstrate basic to class type conversion.
 */
#include<iostream>  // Header
using namespace std;  
class Vector  {  // Vector class
	public:
		Vector():x{0},y{0}{}  // Default constructor.
		Vector(int a){  // Constructor with one parameter, which work as basic to class type converter.
			x=y=a;
		}
		Vector(int a,int b){  // Constructor with one parameter, which work as basic to class type converter.
			x=a; y=b;
		}
		void print(){  // Print values of vector object.
			cout<<endl<<"Values of vector : ("<<x<<","<<y<<")\n";
		}
		void operator=(int a){  // Basic to class type converesion using operator overloading.
			x=y=a;
		}
	private:
		int x,y;
};
int main(){
	Vector v1(5);  // Declaring object using basic to class type conversion.
	Vector v2(2,6);  // Declaring object using basic to class type convesion.
	Vector v3;  // Declaring object.
	v3=7;  // assigning values in vector object using basic to class type conversion.
	cout<<"Printing vectors.\n";
	v1.print();
	v2.print();
	v3.print();
	return 0;
}
