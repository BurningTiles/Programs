/*
 * Author  : BurningTiles
 * Problem : Dole Out Cadbury
 * File    : C.cpp 
 */

#include <iostream>
using namespace std;

int partsCalc(int x, int y){
    
    int ans=0;
    
    while(x && y){
        ++ans;
        if(x>y) x -= y;
        else y -= x;
    }
    
    return ans;
}

int main(){
    
    int ans=0, minl, maxl, minw, maxw;
    cin >> minl >> maxl >> minw >> maxw;

    for(int i=minl; i<=maxl; ++i)
        for(int j=minw; j<=maxw; ++j)
            ans += partsCalc(i,j);

    cout << ans;

    return 0;
}