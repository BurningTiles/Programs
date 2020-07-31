/*
 * Author  : BurningTiles
 * Problem : Digit Pairs
 * File    : B.cpp 
 */

#include <iostream>
using namespace std;

inline int max(int a, int b, int c){
    return (a>b && a>c)? a : (b>a && b>c)? b : c;
}

inline int min(int a, int b, int c){
    return (a<b && a<c)? a : (b<a && b<c)? b : c;
}

int bitScoreCalc(int n){
    
    int x,y,z;

    x = n%10; n /= 10;
    y = n%10; n /= 10;
    z = n;

    return (max(x,y,z)*11 + min(x,y,z)*7)%100;
}

int pairs(int x[],int n){
    
    int temp[]={0,0,0,0,0,0,0,0,0,0}, ans=0;
    
    for(int i=0; i<n; ++i) x[i] /= 10;

    for(int i=0; i<n; ++i)
        for(int j=i+2; j<n; j+=2)
            if(x[i] == x[j])
                if(temp[x[i]]<2)
                    ++temp[x[i]];
    
    for(int i=0; i<10; ++i) ans += temp[i];

    return ans;
}

int main(){
    int n;
    cin >> n;

    int input[n],bitScore[n];
    
    for(int i=0; i<n; ++i){
        cin >> input[i];
        bitScore[i] = bitScoreCalc(input[i]);
    }

    cout << pairs(bitScore,n);

    return 0;
}