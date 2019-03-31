/*
 * This program is to demonstrate type conversion from one class to another class.
 */
#include<iostream>  // Header
using namespace std;
class Matrix{  // class matrix
	public:
		Matrix(){x[0]=x[1]=0;}  // Default constructor.
		Matrix(int a,int b){  // Parameterized constructor.
			x[0]=a; x[1]=b;
		}
		void print(){  // Printing Matrix.
			cout<<"Values in Matrix. : "<<x[0]<<" and "<<x[1]<<endl;
		}
	private:
		int x[2];
};
class Vector{
	public:
		Vector():x{0},y{0}{}  // Default constructor.
		Vector(int a,int b){  // Parameterized constructor.
			x=a; y=b;
		}
		void print(){  // Printing Vector
			cout<<"Values in vector. : ("<<x<<","<<y<<")\n";
		}
		operator Matrix(){  // conversion of one class to another class.
			Matrix temp(x,y);
			return temp;  // returning object of another class.
		}
	private:
		int x,y;
};
int main(){
	Vector v1(3,5);  // Declaring Vector class object.
	Matrix m1=v1;  // assigning values of Vector class object to Matrix class object using one class to another class type conversion.
	cout<<"Printing values.\n";
	v1.print();  
	m1.print();
	return 0;
}
