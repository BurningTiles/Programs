/*
 * This program is to demonstrate inheritance in C++;
 * In this program 4 class are created Person,Account,Admin and Employee.
 */
#include<iostream>
using namespace std;
class Person{  // Pereson class, base/super class for Account and Admin.
	protected:
		string __name;  // variable to store name.
		uint64_t __code;  // variable to store code.
	public:
		Person(string name="",uint64_t code=0):__name(name),__code(code){}  // Constructor with default arguments.
};
class Account:virtual protected Person{ // Account class declared from Person. virtual used to remove confliction of base class.
	protected:
		uint64_t __pay;  // variable to store pay amount.
	public:
		Account(uint64_t pay=0):__pay(pay){}  // constructor
};
class Admin:virtual protected Person{  // derived from Person.
	protected:
		string __experience;  // variable to store employee experience.
	public:
		Admin(string experience=""):__experience(experience){}
};
class Employee:private Account,private Admin{   // Derived from Account and Admin.
	public:
		Employee(string name="",uint64_t code=0,uint64_t pay=0,string experience=""):Person(name,code),Account(pay),Admin(experience){} // constructor with default argument.
		void update(){  // update function.
			cout<<"Insert new data"<<endl;
			cout<<"Name       : "; cin>>__name;
			cout<<"Code       : "; cin>>__code;
			cout<<"Pay        : "; cin>>__pay;
			cout<<"Experience : "; cin>>__experience;
		}
		void print(){  // print the values.
			cout<<endl;  
			cout<<"Employee name       : "<<__name<<endl;
			cout<<"Employee code       : "<<__code<<endl;
			cout<<"Account Pay balance : "<<__pay<<endl;
			cout<<"Experience          : "<<__experience<<endl<<endl;
		}
};
int main(){
	Employee e1;
	e1.update();
	e1.print();
	return 0;
}
