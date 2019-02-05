/*
 * This program is to show overloading of function.
 * In function overloading function have same name but different arguments and maybe different return type.
 * In this progran we will find area of objects of different shape.
 */

#include <iostream>
#define PI 3.141593
using namespace std;

//  Here all 4 functions have same name but different arguments so it will automatically choose function by checking arguments.
float area(float x){ return x*x; }  // For area of a square.
float area(float x,float y){ return x*y; }  // For area of a rectangle.
float area(float x,char c){ return x*x*PI; }  // For area of a circle.
float area(float a,float b,float c){
	float m=(a+b+c)/2.0;
	return (m*(m-a)*(m-b)*(m-c));   // Used formula of finding triangle area using 3 sides.
}  // For area of triangle.

int main()
{
	int c;  // Declaring variable to check choice.
	cout<<"\nSelect shape : "<<endl  // Menu for user for selection.
		<<"1. Square	2. Rectangle"<<endl
		<<"3. Circle	4. Triangle \n : ";
	cin>>c;
	switch(c){
		case 1:  // For square.
			float x;
			cout<<"\nEnter length of side : ";
			cin>>x;
			cout<<"\nArea of given square is "<<area(x);
		case 2:  // For rectangle.
		    float x,y;
			cout<<"\nEnter length and width of side : ";
			cin>>x>>y;
			cout<<"\nArea of given rectangle is "<<area(x,y);
		case 3:  // For circle.
		    float x;
			cout<<"\nEnter radius of circle : ";
			cin>>x;
			cout<<"Area of given circle is "<<area(x,'c');
		case 4:  // For Triangle.
		    float x,y,z;
			cout<<"\nEnter length of sides : ";
			cin>>x>>y>>z;
			cout<<"Area of given square is "<<area(x,y,z);
		default:
		    cout<<"Enter valid choice.\n";
	}
	return 0;
}
