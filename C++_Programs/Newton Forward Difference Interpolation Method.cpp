/*
    This program is for solving equal interval problems using newton forward difference interpolation method.
    It is created by using class to make data more secure and handle more properly.
    To understand basic simplified program is also created.
    
    Regards Manish.
*/
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

inline long long fact(int x){ return (x<2)?1:x*fact(x-1);}  // Function for factorial.
inline int sum(int x){return (x<1)?0:x+sum(x-1);}  // Function for series sum.

class Newton{
	float *x,*y,ans,p,h;
	int n,y_size;
public:
	int set();
	void FindAnswer(float);
	float result();
}o; // Here o is object of class Newton.

int Newton::set(){
	ans=0;

	cout<<endl<<"Enter Length of given inputs : ";
	cin>>n;
	y_size=sum(n);

	if(n>20 || n<2){  // Checking the length. You can increase it as per requirement.
        	cout<<endl<<"Enter valid length.";
        	return -1;
	}

	x=new float(n);  //allocation of memory
	y=new float(y_size); //allocation of memory

	cout<<endl<<"Enter values of x : ";  // Get values for x;
    	for(int xindex=0;xindex<n;xindex++){
        	cin>>*(x+xindex);
    	}
    // checking of values of x.
    h=(*(x+1)-*x);  // Difference between 2 raw value of x, cause this program is for equal interval problems.
    for(int xindex=n-1;xindex>1;xindex--){  // Checking values of x.
        if((*(x+xindex)-*(x+xindex-1))!=h){
            cout<<endl<<"Sorry given data is not sequential."<<endl;
            return -1;
        }
    }

    cout<<endl<<"Enter values of y : ";  // Get values of y.
    for(int yindex=0;yindex<n;yindex++){
        cin>>*(y+yindex);
    }

    for(int i=1;i<n;i++){  // Finding vlues for difference between values of y.
        for(int j=0;j<(n-i);j++){
            *(y+y_size+j-sum(n-i))=*(y+y_size+j+1-sum(n-i+1))-*(y+y_size+j-sum(n-i+1));
        }
    }

    /*
    // to see if the calculation is done correctly unhide this loop.
    for(int i=1;i<n;i++){
        for(int j=0;j<(n-i);j++){
            cout<<*(y+y_size+j-sum(n-1))<<" ";
        }
        cout<<endl;
    }
    */

    return 0;
}

void Newton::FindAnswer(float input){
    p=(input-*x)/h;
    ans=*y;
    for(int index=1;index<n;index++){ // calculating the answer.
        float temp=1;
        for(int i=0;i<index;i++){  // Inline function can be created but for security it's not created.
            	temp=temp*(p-i);
        }
        ans=ans+float((temp*(*(y+y_size-sum(n-index))))/(fact(index)));
    }
}

float Newton::result(){ return ans; }

void NewtonForwardCalculator(){
    	float input;
	if(!o.set()){ return; }
	system("clear");  // It will clear screen. For windows computers replace "clear" with "cls"
	cout<<endl<<"Enter input value for Function : ";
	scanf(" %f",&input); // cin is giving error "double free or curruption (out), Aborted" so used scanf, program will be updated when find issue.
	o.FindAnswer(input);  // Calling function.
	cout<<endl<<"Approximate Answer is : "<<o.result()<<endl;
}

int main(){
	NewtonForwardCalculator();
	return 0;
}
