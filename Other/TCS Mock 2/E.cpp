/*
 * Author  : BurningTiles
 * Problem : Grooving Monkeys
 * File    : E.cpp 
 */

#include <iostream>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
    return (b==0)? a : gcd(b, a%b);
}

int main(){
    
    ll tt, n, tempi, temp;
    cin >> tt;
    
    while(tt--){
        cin >> n;
        ll x[n];
        
        for(int i=0; i<n; ++i) cin >> x[i];

        int i=0, ans=1, carry;

        while(i<n){
            tempi = i;
            carry = 0;
            while(x[tempi]!=0){
                temp = tempi;
                tempi = x[tempi] - 1;
                x[temp] = 0;
                ++carry;
            }
            if(++i && carry!=0)
                ans = ans*carry / gcd(ans,carry);
        }

        cout << ans << endl;
    }
    
    return 0;
}
