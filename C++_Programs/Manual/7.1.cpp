/*
 * This program is for illustrating friend function.
 * In this we will create program to find mean value of given numbers using friend function.
 */

#include <iostream>  // Header
using namespace std;
class B;  // Declaring class B.
class A {  //  Defining class A.
	int a;  //  Variable of class A.
	public:
		void set(int x){ a=x;}  //  set function of class A.
		friend void mean(A,B);  //  Declaring friend function.
};

class B {  //  Defining class B.
	int b;  //  Variable of class B.
	public:
		void set(int x){ b=x;}  //  set function of class B.
		friend void mean(A,B);  //  Declaring friend function.
};

void mean(A x,B y){  //  Definition of mean function.(friend function)
	(x.a<y.b)? cout<<"object of class A has mean value : "<<x.a  // Checking values of both functions and print it.
        : cout<<"object of class B has mean value : "<<y.b;
	cout<<endl;
}

int main()
{
	A obj1;  // Defining class A object.
	B obj2;  // Defining class B objext.
	obj1.set(5);  // Set value to 5.
	obj2.set(10);  // Set value to 10.
	mean(obj1,obj2);  // Fing mean using friend function.
	return 0;
}
