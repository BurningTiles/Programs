/*
 * This program is to create a class and illustrate the array of the objects.
 * we will use practical 8.1 to extend this program.
 */
#include<iostream>  // Header files
#define N 5
using namespace std;

class BOX{  // Box Function.
	private:  // Access-specifier
		unsigned int length, width, height;  // Declaring length, width and height variable for Box.
	public:  // Access-specifier
		void set(int i){  // Function to set values in object.
			cout<<"Enter dimentions of BOX"<<i<<" : ";
			cin>>length>>width>>height;
		}
		void print(int);  // Function to print object values.
};  // Declaring object1 inside the class.

void BOX::print(int i){  // Function definition outside the class.
	cout<<"Dimentions of Box"<<i<<" is "<<length<<" x "<<width<<" x "<<height<<endl;
}

int main(){
	BOX B[N]; // Declaring array of object of class BOX.
	for(int i=0;i<N;i++)  // Loop to get values for objects.
		B[i].set(i+1);
	cout<<endl;
	for(int i=0;i<N;i++)  // Printing objects.
		B[i].print(i+1);
	return 0;
}
