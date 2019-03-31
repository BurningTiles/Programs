/*
 * This program is to illustrate this pointer.
 * Simply it is address of the current working object of a class.
 */
#include<iostream>  // Header
using namespace std;
class Vector{  // Vector class
	public:
		Vector(int x,int y){  // Constructor
			this->x=x;  /* Here the name of the passed variable and the class member variable is same
				           so defaultly it consider variable passed in argument.
				           so using "x=x" will not affect on class member variable x.
				           to use class member variable we will use this which is current working object address so it will be like "this->x" */
			(*this).y=y;  /* Here "this" is pointer so to use its object it will be like "*this"
					         and to use value of object '.'(dot) is used.
					         so it is like "(*this).y" and in short it also can written as "this->" which is equal to "(*this).y" */
		}
		void print(Vector x){
			cout<<"Values of called object : ("<<this->x<<","<<(*this).y<<")\n";  // To remove confliction between same name varibale x and object x, "this" is helpful.
			cout<<"Values of object passed in argument : ("<<x.x<<","<<x.y<<")"<<endl;
		}
	private:
		int x,y;  // Declaring member variable.
};
int main(){
	Vector v1(2,5),v2(6,8);  // Creating objects
	v1.print(v2);  // Ptintig objects.
	return 0;
}
