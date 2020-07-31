/*
 * Author  : BurningTiles
 * Problem : Death Battle
 * File    : F.cpp 
 */

#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){
    return (b==0)? a : gcd(b, a%b);
}

ll fact(ll x){
    return (x<2)? 1 : x*fact(x-1);
}

ll nCr(ll n, ll r){
    return fact(n)/(fact(n-r)*fact(r));
}

int main(){

    ll tt, A, H, L1, L2, M, C, temp, k, z, temp1, div;
    cin >> tt;

    while(tt--){
        cin >> A >> H >> L1 >> L2 >> M >> C;

        temp = 0;
        div = pow(L2,M);

        if(M*(A+C) < H){
            cout << "RIP" << endl;
            continue;
        }

        k=0; z=M*A;
        
        while(z<H){
            z += C;
            ++k;
        }

        for(int i=k; i<=M; ++i){
            if(i==0)        temp += pow(L2-L1,M);
            else if(i==M)   temp += pow(L1,i);
            else            temp += pow(L1,i)*pow(L2-L1,M-i)*nCr(M,i);
        }

        temp1 = gcd(temp,div);
        
        cout << (temp/temp1) << '/' << (div/temp1);
    }

    return 0;
}