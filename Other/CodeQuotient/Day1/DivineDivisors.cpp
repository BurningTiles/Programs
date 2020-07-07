/*
 * Author : BurningTiles
 */

#include <iostream>
#include <vector>
#include <cmath>
#define ll long long
using namespace std;

int main(){
    vector<ll> v;
    ll n,i;
    cin >> n;
    for(i=1; i<sqrt(n); i++){
        if(n%i==0){
            cout << i << ' ';
            v.push_back(n/i);
        }
    }
    if(n/i == i) cout << i << ' ';
    for(i=v.size()-1; i>=0; i--) cout << v[i] << ' ';
    return 0;
}


/*
Given a number N, find all possible divisors and print them in increasing order separated by space.

Input Format
The first line of input contains an integer N denoting the number

Output Format
Print a line containing all the divisors in increasing order separated by space.

Constraints
1 <= N <= 10^12

Sample Input
10

Sample Output
1 2 5 10
*/