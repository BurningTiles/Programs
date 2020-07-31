/*
 * Author  : BurningTiles
 * Problem : Petrol Pump
 * File    : D.cpp 
 */

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int in[51], temp, sum=0, n=0;

    while(cin.peek()!='\n' && cin >> temp) {
        in[n++] = temp;
        sum += temp;
    }

    int arr[n+1][sum+1];

    for(int i=0; i<=n; ++i)
        arr[i][0] = 1;

    for(int i=0; i<=sum; ++i)
        arr[0][i] = 0;

    for(int i=1; i<=n; ++i)
        for(int j=1; j<=sum; ++j){
            arr[i][j] = arr[i-1][j];
            if(in[i-1] <= j)
                arr[i][j] = arr[i][j] | arr[i-1][j-in[i-1]];
        }

    for(int i=sum/2; i>=0; --i)
        if(arr[n][i]){
            sum -= i;
            break;
        }

    cout << sum << endl;
    return 0;
}