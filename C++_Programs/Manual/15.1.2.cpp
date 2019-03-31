/*
 * This program is to demonstrate class to basic type conversion.
 */
#include<iostream>  // Header
#include<cmath>
using namespace std;  
class Vector  {  // Vector class
	public:
		Vector():x{0},y{0}{}  // Default constructor.
		Vector(int a,int b){  // Constructor with one parameter, which work as basic to class type converter.
			x=a; y=b;
		}
		void print(){  // Print values of vector object.
			cout<<endl<<"Values of vector : ("<<x<<","<<y<<")\n";
		}
		operator float(){   // class to basic type conversion.
			float length=float(x*x+y*y);
			return sqrt(length);
		}
	private:
		int x,y;
};
int main(){
	Vector v1(6,8);  // Declaring object using basic to class type conversion.
	cout<<"Printing vectors.\n";
	v1.print();
	float length=v1;  // Assigning value in float using basic to class conversion.
	cout<<"Distance of vector object is : "<<length<<endl;
	return 0;
}
