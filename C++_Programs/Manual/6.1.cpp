/*
 * This program is to show overloading of function.
 * In function overloading function have same name but different arguments and maybe different return type.
 * In this progran we will find area of objects of different shape.
 */

#include <iostream>
#include <cmath>
#define PI 3.141593
using namespace std;

//  Here all 4 functions have same name but different arguments so it will automatically choose function by checking arguments.
float area(float x){ return x*x; }  // For area of a square.
float area(float x,float y){ return x*y; }  // For area of a rectangle.
float area(float x,char c){ return x*x*PI; }  // For area of a circle.
float area(float a,float b,float c){
	float m=(a+b+c)/2.0;
	return pow((m*(m-a)*(m-b)*(m-c)),0.5);   // Used formula of finding triangle area using 3 sides.
}  // For area of triangle.

int main()
{
	int c;  // Declaring variable to check choice.
	float x,y,z;  // Will be used to store user input values.
	cout<<"\nSelect shape : "<<endl  // Menu for user for selection.
		<<"1. Square	2. Rectangle"<<endl
		<<"3. Circle	4. Triangle \n : ";
	cin>>c;
	switch(c){
		case 1:  // For square.
			cout<<"\nEnter length of side : ";
			cin>>x;
			cout<<"\nArea of given square is "<<area(x);
			break;
		case 2:  // For rectangle.
			cout<<"\nEnter length and width of side : ";
			cin>>x>>y;
			cout<<"\nArea of given rectangle is "<<area(x,y);
			break;
		case 3:  // For circle.
			cout<<"\nEnter radius of circle : ";
			cin>>x;
			cout<<"Area of given circle is "<<area(x,'c');
			break;
		case 4:  // For Triangle.
			cout<<"\nEnter length of sides : ";
			cin>>x>>y>>z;
			cout<<"Area of given Triangle is "<<area(x,y,z);
			break;
		default:
		    cout<<"Enter valid choice.\n";
	}
	return 0;
}
