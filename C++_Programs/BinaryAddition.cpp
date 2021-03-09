/**
 * Author  : BurningTiles
 * Created : 2021-03-09 08:59:09
 * Link    : BurningTiles.github.io
 * File    : BinaryAddition.cpp
**/

#include <iostream>
#define int long long
using namespace std;

int add(int a, int b){
	int ans = 0, tmp, power=1;
	while(a || b){
		tmp = a%10 + b%10;
		ans += power*(tmp%2);
		power *= 10;
		a /= 10;
		b /= 10;
	}
	ans += power*tmp/2;
	return ans;
}

signed main(){
	int a,b;
	cout << "Enter two binary numbers : \n";
	cin >> a >> b;
	cout << "Ans : " << add(a,b) << endl;
	return 0;
}