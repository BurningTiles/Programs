/*
    This program is for solving equal interval problems using newton forward difference interpolation method.
    This is simplified program, advanced program is also available.

    Regards Manish.
*/

#include<iostream> // Headers
#include<cstdlib>
using namespace std;

inline float pc(float p,int n){return (n<1)?p:float((p-n)*pc(p,n-1));} // Function for finding some values in equation.
inline int fact(int n){ return (n<2)?1:n*fact(n-1); } // Funcion for factorial

int main(){

    int n;
    cout<<endl<<"Enter Length of given inputs : ";
	cin>>n;

	if(n>20 || n<2){ // Checking the length. You can increase it as per requirement.
        cout<<endl<<"Enter valid length.";
        return 0;
	}

	float x[n],y[n][n];  // Declaring variable.

	cout<<endl<<"Enter values of x : "; // Get values for x;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    int h=(x[1]-x[0]); // Difference between 2 raw value of x, cause this program is for equal interval problems.

    for(int i=n-1;i>0;i--){  // Checking values of x.
        if(x[i]-x[i-1]!=h){
            cout<<endl<<"Sorry given data is not sequential."<<endl;
            return 0;
        }
    }

    cout<<endl<<"Enter values of y : "; // Get values of y.
    for(int i=0;i<n;i++){
        cin>>y[0][i];
    }

    for(int i=1;i<n;i++) // Finding vlues for difference between values of y.
        for(int j=0;j<n-i;j++)
            y[i][j]=y[i-1][j+1]-y[i-1][j];
    /*
    To check the values in y is calculated correctly or not unhide this.
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++)
            cout<<y[i][j]<<" ";
            cout<<endl;
    }
    */
    system("clear");  // It will clear screen. For windows computers replace "clear" with "cls"

    float input;
    cout<<endl<<"Enter input value for Function : ";
	cin>>input;

    float ans=y[0][0],p=(input-x[0])/h;   // Declaring and initialization ans and p.
    for(int index=1;index<n;index++) // calculating the answer.
        ans=ans+float(pc(p,index-1)*y[index][0]/fact(index));

    cout<<endl<<"Approximate Answer is : "<<ans<<endl;
    return 0;
}
