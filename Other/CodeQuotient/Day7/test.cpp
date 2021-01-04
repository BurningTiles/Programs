/**
 * Author  : BurningTiles
 * Created : 2020-08-06 23:14:03
**/ 
 
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t=3;
	double m=1471, r=12;
	while(t--){
		m *= (1+r/1200);
		m -= 500;
	}
	cout << m;
	return 0;
}

/**

**/
