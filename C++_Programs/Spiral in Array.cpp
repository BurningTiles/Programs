/*
 * This program is to traverse in 2 dimensional array in spiral way.
 */
#include <iostream>
#define N 5
using namespace std;

int main(){
	int x[N][N] = {1 ,2 ,3 ,4 ,5 ,
	               6 ,7 ,8 ,9 ,10,
				   11,12,13,14,15,
				   16,17,18,19,20,
				   21,22,23,24,25};

	int m=0,n=N-1;
	int i=0,j=N-1;

	for (int k=0; k<(N+1)/2 ; k++){
		for (int a=i; a<=j; a++)
			cout<<x[i][a]<<" ";
		m++;
		cout<<endl;
		for (int a=m; a<=n; a++)
			cout<<x[a][j]<<" ";
		j--;
		cout<<endl;
		for (int a=j; a>=i; a--)
			cout<<x[n][a]<<" ";
		n--;
		cout<<endl;
		for (int a=n; a>=m; a--)
			cout<<x[a][i]<<" ";
		i++;
		cout<<endl;
	}
	return 0;
}
