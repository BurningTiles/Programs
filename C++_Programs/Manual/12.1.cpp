/*
 * This program is to illustrate concept of operator overloading using unary operator.
 * Here increment operator is overloaded, you can try decrement and other also.
 */
#include <iostream>  // Header
using namespace std;
class Vector{  // Vector class creating.
	public:
		void set(int x,int y){  // set function
			real=x;
			img=y;
		}
		void print(){  // print function
			cout<<"Value of vector is ("<<real<<","<<img<<")"<<endl;
		}
		void operator++(){  // Unary Operator overloading, it will increment value of Vector object.
			real++;  // Incrementing values of object.
			img++; 
		}
	private:
		int real,img;  // Declaring variable members.
};
int main(){
	Vector V;  // Creating object V of Vector type.
	V.set(5,10);  // Setting it up.
	V.print();  // Printing object.
	++V;  // Incrementing. , You can not use "V++" cause it is declared for prefix.
	// You can also increment like "V.operator++()"
	cout<<endl<<"Vector after incrementing."<<endl;  
	V.print();  // Again printing the vector.
	return 0;
}
