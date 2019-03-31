
#include<iostream>
using namespace std;
int main(){
	int ans=0,value=0;
	cout<<"To exit press ctrl+d."<<endl;
	while(cin>>value)
		ans+=value;
	cout<<endl<<"Total = "<<ans;
	return 1;
}
