/*
 * This program is to illustration concept of function overriding.
 */
#include<iostream>
using namespace std;
class base{  // base class.
	public:
		virtual void print(){  // print function of base class with virtual.
			cout<<"Base class print."<<endl;  
		}
		void show(){  // show function of base.
			cout<<"Base class show."<<endl;
		}
};
class derived:public base{
	public:
		void print(){  // print funtion of derived class. it will override base class print function.
			cout<<"Derived class print."<<endl;
		}
		void show(){  // show function of derived class. it will override base class show function.
			cout<<"Derived class show."<<endl;
		}
};
int main(){
	base b,*ptr=&b; // creating base class object and a pointer which points to the created base class object.
	derived d;  // declaring derived class object.
	ptr->print();  // calling base class print function.
	ptr->show();  // calling base class show function.
	ptr=&d;  // change pointer to derived class object.
	ptr->print();  // it will call the derived class function as the base class function is virtual function.
	ptr->show();  // in this case when the pointer is of base class and point to derived class object. then at calling time if function is overriding and if base class function is not virtual then it will call base class function instead of derived class function.
	return  0;
}
