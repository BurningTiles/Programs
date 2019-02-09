/*
 * This program is illustrate operator overloading of Binary operators.
 * Program of vector is created to illustrate it and get the sum of it.
 */
#include <iostream>  // Header
using namespace std;
class Vector{  // Vector class
	public:
		void set(int x,int y){  // set function.
			real=x;
			img=y;
		}
		void print(){  // print function.
			cout<<"("<<real<<","<<img<<")"<<endl;
		}
		Vector operator+(Vector V){  //  Binary operator overloading, It will return sum of 2 vectors.
			Vector temp;  // Creating temp Vector to return the sum of given 2 vectors.
			temp.real=real+V.real;  // assigning sum of variable to temp variable. 
			temp.img=img+V.img; 
			return temp;  // Returning sum of 2 objects which is stored in temp.
		}
	private:
		int real,img;  // Declaring variable members.
};
int main(){
	Vector V1,V2,ANS;  // Creating 3 Vector type objects.
	V1.set(2,5);  // Set vector1.
	V2.set(5,7);  // Set vector2.
	cout<<"Value of Vector1 : "; V1.print(); // printing Vectors.
	cout<<"Value of Vector2 : "; V2.print();
	ANS=V1+V2;  // using operator overloading to get sum of V1 and V2.
	// You can also use "ANS=V1.operator+(V2)"
	cout<<endl<<"ANS Vector is : "; ANS.print(); // printing answer.
	return 0;
}
