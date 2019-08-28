/* 
 * This program is to ilustrate working of Shift Reduce Parser.
 * This program will not work in all conditions.
 * 
 * ~Manish
 */

#include <iostream>
#include <iomanip>
using namespace std;
#define N 20
// You can change value of N as per your requirement.

string rightSide[N];
char leftNT[N];
int top=0;
string inputString;

bool save(){
	if (inputString.length()<3){
		cerr<<"Not a equation."<<endl;
		return false;
	}
	else if(inputString.at(1)=='-' && inputString.at(2)=='>'){
		int breakPoint=3;
		for (int i=2; i<inputString.length(); i++)
			if (inputString.at(i)=='|'){
				rightSide[top]=inputString.substr(breakPoint,i-breakPoint);
				leftNT[top]=inputString.at(0);
				breakPoint=i+1;
				top++;
			}
		rightSide[top]=inputString.substr(breakPoint,inputString.length());
		leftNT[top]=inputString.at(0);
		top++;
		return true;
	}
	else {
		cerr<<"Invalid equation."<<endl;
		return false;
	}
}

void print(){
	string stack="$";
	cout<<endl;
	cout<<"Stack                    Input                    Action"<<endl;
	cout<<"-----                    -----                    ------"<<endl;
	do{
		int breakPoint;
		int match=-1;
		bool shift=true;
		for (int i=stack.length(); i>1; i--){
			string temp=stack.substr(i-1,stack.length()-i+1);
			for (int j=0; j<top; j++){
				if (temp==rightSide[j]){
					shift=false;
					match=j;
					breakPoint=i-1;
					break;
				}
			}
			if (!shift) break;
		}
		if (!shift) {
			cout.setf(ios::left);
			cout<<setw(25)<<stack<<setw(25)<<inputString<<"Reduce by "<<leftNT[match]<<"->"<<rightSide[match]<<endl;
			stack=stack.substr(0,breakPoint)+leftNT[match];
		}
		else {
			cout.setf(ios::left);
			cout<<setw(25)<<stack<<setw(25)<<inputString<<"Shift "<<inputString.at(0)<<endl;
			stack.push_back(inputString.at(0));
			inputString = inputString.substr(1,inputString.length());
		}
		
	} while (inputString!="");
	
	stack.pop_back();
	
	if(stack.length()==2 && stack.at(1)==leftNT[0])
		cout<<endl<<endl<<"Accepted..."<<endl<<endl;
	else
		cout<<endl<<endl<<"Rejected..."<<endl<<endl;
}

int main(){
	cout<<"When you're done enter q.\nEnter equations : "<<endl;
	cin>>inputString;
	while (inputString!="q"){
		if(!save()) return -1;
		cin>>inputString;
	}
	cout<<endl<<"Enter input string : ";
	if (top==0) {
		cout<<"No equations found."<<endl;
		return -2;
	}
	cin>>inputString;
	inputString.push_back('$');
	print();
	return 0;
}


/*
 * Output : 
 
When you're done enter q.
Enter equations : 
S->S+S|S-S|(S)|a
q

Enter input string : a-(a+a)

Stack                    Input                    Action
-----                    -----                    ------
$                        a-(a+a)$                 Shift a
$a                       -(a+a)$                  Reduce by S->a
$S                       -(a+a)$                  Shift -
$S-                      (a+a)$                   Shift (
$S-(                     a+a)$                    Shift a
$S-(a                    +a)$                     Reduce by S->a
$S-(S                    +a)$                     Shift +
$S-(S+                   a)$                      Shift a
$S-(S+a                  )$                       Reduce by S->a
$S-(S+S                  )$                       Reduce by S->S+S
$S-(S                    )$                       Shift )
$S-(S)                   $                        Reduce by S->(S)
$S-S                     $                        Reduce by S->S-S
$S                       $                        Shift $


Accepted...

 */
