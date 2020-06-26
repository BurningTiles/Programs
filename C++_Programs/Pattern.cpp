/*
 * Author  : BurningTiles and KVRaiden
 * Type    : Pattern Program
 */

#include <iostream>
using namespace std;

int getSize(){
	int x;
	cout << "\nEnter size   : ";
	cin >> x;
	if(x < 1){
		cout << "\nSize cannot be less than 1." << endl;
		return 0;
	}
	cout << endl;
	return x;
}

char getChar(){
	char x;
	cout << "\nEnter Symbol : ";
	cin >> x;
	return x;
}

void solidRectangle(){
	char c = getChar();
	int s = getSize();
	for(int i=1; i<=(s+1)/2; i++){
		for(int j=1; j<=s; j++)
			cout << c << ' ';
		cout << endl;
	}
}

void hollowRectangle(){
	char c = getChar();
	int s = getSize();
	int n = (s+1)/2;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=s; j++)
			if(i==1 || i==n || j==1 || j==s)
				cout << c << ' ';
			else
				cout << "  ";
		cout << endl;
	}
}

void halfPyramid(){
	char c = getChar();
	int s = getSize();
	for(int i=1; i<=s; i++){
		for(int j=1; j<=i; j++)
			cout << c;
		cout << endl;
	}
}

void invertedHalfPyramid(){
	char c = getChar();
	int s = getSize();
	for(int i=s; i>0; i--){
		for(int j=1; j<=i; j++)
			cout << c;
		cout << endl;
	}
}

void hollowInvertedHalfPyramid(){
	char c = getChar();
	int s = getSize();
	for(int i=s; i>0; i--){
		for(int j=1; j<=i; j++)
			if(j==1 || j==i || i==s)
				cout << c;
			else
				cout << ' ';
		cout << endl;
	}
}

void fullPyramid(){
	char c = getChar();
	int s = getSize();
	for(int i=1; i<=s; i++){
		for(int j=1; j<s-i+1; j++) cout << ' ';
		for(int j=1; j<=i; j++)
			cout << c << ' ';
		cout << endl;
	}
}

void invertedFullPyramid(){
	char c = getChar();
	int s = getSize();
	for(int i=s; i>0; i--){
		for(int j=1; j<s-i+1; j++) cout << ' ';
		for(int j=1; j<=i; j++)
			cout << c << ' ';
		cout << endl;
	}
}

void hollowFullPyramid(){
	char c = getChar();
	int s = getSize();
	for(int i=1; i<=s; i++){
		for(int j=1; j<s-i+1; j++) cout << ' ';
		for(int j=1; j<=i; j++)
			if(j==1 || j==i || i==s)
				cout << c << ' ';
			else
				cout << "  ";
		cout << endl;
	}
}

void solidDiamond(){
	char c = getChar();
	int s = getSize();
	for(int i=1; i<=2*s; i++){
		int n = (i>s)? 2*s-i : i;
		for(int j=1; j<s-n+1; j++) cout << ' ';
		for(int j=1; j<=n; j++)
			cout << c << ' ';
		cout << endl;
	}
}

void hollowDiamond(){
	char c = getChar();
	int s = getSize();
	for(int i=1; i<=2*s; i++){
		int n = (i>s)? 2*s-i : i;
		for(int j=1; j<s-n+1; j++) cout << ' ';
		for(int j=1; j<=n; j++)
			if(j==1 || j==n)
				cout << c << ' ';
			else
				cout << "  ";
		cout << endl;
	}
}

void solidHalfDiamond(){
	char c = getChar();
	int s = getSize();
	for(int i=1; i<=2*s; i++){
		int n = (i>s)? 2*s-i : i;
		for(int j=1; j<=n; j++)
			cout << c ;
		cout << endl;
	}
}

void diamondSquare(){
	char c = getChar();
	int s = getSize();
	for(int i=1; i<2*s; i++){
		int n = (i>s)? 2*s-i : i;
		for(int j=s; j>=n; j--) cout << c ;
		for(int j=2; j<n*2-1; j++) cout << ' ';
		for(int j=s; j>=n; j--) cout << c ;
		if(n==1) cout << "\b ";
		cout << endl;
	}
}

void butterfly(){
	char c = getChar();
	int s = getSize();
	for(int i=0; i<2*s; i++){
		int n = (i>s)? 2*s-i : i;
		for(int j=1; j<n; j++)
			cout << c;
		for(int j=(s-n)*2; j>1; j--)
			cout << ' ';
		for(int j=1; j<n; j++)
			cout << c;
		if(n==s) cout << "\b ";
		cout << endl;
	}
}

void xInSqare(){
	char c = getChar();
	int s = getSize();
	char x[s][s];
	for(int i=0; i<s; i++){
		for(int j=0; j<s; j++)
			if(i==0 || i==s-1 || j==0 || j==s-1)
				x[i][j] = c;
			else
				x[i][j] = ' ';
		x[i][i] = c;
		x[i][s-i-1] = c;
		for(int j=0; j<s; j++)
			cout << x[i][j];
		cout << endl;
	}
}

void plusInDiamond(){
	char c = getChar();
	int s = getSize(),n = s*2-1, t;
	char x[n][n];
	for(int i=0; i<n; i++){
		if (i!=s-1)
			for(int j=0; j<n; j++)
				x[i][j] = ' ';
		if(i<s){ 
			t = i+1;
			x[s-1][i] = c;
			x[s-1][n-i] = c;
		}
		else{
			t = 2*s-i-1;
		}
		x[i][s-1] = c;
		x[i][s-t] = c;
		x[i][s+t-2] = c;
		for(int j=0; j<n; j++)
			cout << x[i][j];
		cout << endl;
	}
}

void leftArrow(){
	char c = getChar();
	int s = getSize();
	for(int i=1; i<s*2; i++){
		int n = (i>s)? 2*s-i : i;
		if(n==s){
			for(int j=1; j<s*2; j++)
				cout << c;
			cout << endl;
		}
		else{
			for(int j=1; j<=s-n; j++)
				cout << ' ';
			cout << c << endl;
		}
	}
}

void rightArrow(){
	char c = getChar();
	int s = getSize();
	for(int i=1; i<s*2; i++){
		int n = (i>s)? 2*s-i : i;
		if(n==s){
			for(int j=1; j<s*2; j++)
				cout << c;
			cout << endl;
		}
		else{
			for(int j=2; j<s+n; j++)
				cout << ' ';
			cout << c << endl;
		}
	}
}

void solidRhombus(){
	char c = getChar();
	int s = getSize();
	for(int i=1; i<=s; i++){
		for(int j=s; j>i; j--)
			cout << ' ';
		for(int j=1; j<=s; j++)
			cout << c;
		cout << endl;
	}
}

void hollowRhombus(){
	char c = getChar();
	int s = getSize();
	for(int i=1; i<=s; i++){
		for(int j=s; j>i; j--)
			cout << ' ';
		
		for(int j=1; j<=s; j++)
			if(i==1 || i==s || j==1 || j==s)
				cout << c;
			else
				cout << ' ';
		cout << endl;
	}
}

void halfPyramidNum(){
	int s = getSize();
	for(int i=1; i<=s; i++){
		for(int j=1; j<=i; j++)
			cout << j;
		cout << endl;
	}
}

void invertedHalfPyramidNum(){
	int s = getSize();
	for(int i=s; i>0; i--){
		for(int j=1; j<=i; j++)
			cout << j;
		cout << endl;
	}
}

void hollowInvertedHalfPyramidNum(){
	int s = getSize();
	for(int i=s; i>0; i--){
		for(int j=1; j<=i; j++)
			if(i==s)
				cout << j;
			else if(j==1)
				cout << s-i+1;
			else if(j==i)
				cout << s;
			else
				cout << ' ';
		cout << endl;
	}
}

void fullPyramidNum(){
	int s = getSize(), c = 1;
	for(int i=1; i<=s; i++){
		for(int j=1; j<s-i+1; j++) cout << ' ';
		for(int j=1; j<=i; j++)
			cout << c++ << ' ';
		cout << endl;
	}
}

void hollowFullPyramidNum(){
	int s = getSize();
	for(int i=1; i<=s; i++){
		for(int j=1; j<s-i+1; j++) cout << ' ';
		for(int j=1; j<=i; j++)
			if(j==1 || j==i || i==s)
				cout << j << ' ';
			else
				cout << "  ";
		cout << endl;
	}
}

void hollowHalfPyramidNum(){
	int s = getSize();
	for(int i=1; i<=s; i++){
		for(int j=1; j<=i; j++)
			if(j==1 || j==i || i==s)
				cout << j;
			else
				cout << ' ';
		cout << endl;
	}
}

void palindromePyramidNum(){
	int s = getSize();
	for(int i=1; i<=s; i++){
		for(int j=1; j<i; j++)
			cout << j << ' ';
		for(int j=i; j>0; j--)
			cout << j << ' ';
		cout << endl;
	}
}

void palindromePyramidAlphabet(){
	int s = getSize();
	for(int i=1; i<=s; i++){
		for(int j=1; j<i; j++)
			cout << char(j+64) << ' ';
		for(int j=i; j>0; j--)
			cout << char(j+64) << ' ';
		cout << endl;
	}
}

void palindromeStarPyramidNum(){
	int s = getSize();
	for(int i=1; i<=s; i++){
		for(int j=s; j>=i; j--)
			cout << '*';
		for(int j=1; j<=i; j++)
			cout << i << '*';
		for(int j=s; j>i; j--)
			cout << '*';
		cout << endl;
	}
}

void palindromePyramidCenteredNum(){
	int s = getSize();
	for(int i=1; i<=s; i++){
		for(int j=s; j>i; j--)
			cout << "  ";
		for(int j=1; j<i; j++)
			cout << j << ' ';
		for(int j=i; j>0; j--)
			cout << j << ' ';
		cout << endl;
	}
}

void solidHalfDiamond1Num(){
	int s = getSize();
	for(int i=1; i<s*2; i++){
		int t = (i>s)? s*2-i : i;
		for(int j=1; j<=t; j++)
			cout << t;
		cout << endl;
	}
}

void solidHalfDiamond2Num(){
	int s = getSize();
	for(int i=1; i<s*2; i++){
		int t = (i>s)? s*2-i : i;
		for(int j=1; j<=t; j++)
			cout << t << '*';
		cout << "\b ";
		cout << endl;
	}
}

void solidHalfDiamond3Num(){
	int s = getSize(), c=1;
	for(int i=1; i<=s; i++){
		for(int j=1; j<i; j++)
			cout << c++ << '*';
		cout << "\b ";
		cout << endl;
	}
	for(int i=s-1; i>0; i--){
		c -= 2*i-1;
		for(int j=1; j<i; j++)
			cout << c++ << '*';
		cout << "\b ";
		cout << endl;
	}
}

void solidHalfDiamond4Num(){
	int s = getSize();
	cout << '*' << endl;
	for(int i=1; i<s*2; i++){
		cout << "* ";
		int t = (i>s)? s*2-i : i;
		for(int j=1; j<t; j++)
			cout << j << ' ';
		for(int j=t; j>0; j--)
			cout << j << ' ';
		cout << '*' << endl;
	}
	cout << '*' << endl;
}

void numberMountain1(){
	int s = getSize(), c=1;
	for(int i=1; i<=s; i++){
		for(int j=1; j<=i; j++)
			cout << c++ << ' ';
		cout << endl;
	}
}

void numberMountain2(){
	int s = getSize(), x[s][s]={1};
	for(int i=0; i<s; i++){
		for(int j=0; j<=i; j++){
			if(j==0 || j==i)
				x[i][j] = 1;
			else
				x[i][j] = x[i-1][j-1] + x[i-1][j];
			cout << x[i][j] << ' '; 
		}
		cout << endl;
	}
}

void specialPattern(){
	char c = getChar();
	int s = getSize(), n=(s*3)+(s-2)*3+1, m=n/2, p[4][2] = {m,m,m,m,m,m,m,m};
	char x[n][n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			x[i][j] = ' ';
	x[m][m] = c;
	for(int i=1; i<s; i++){
		x[--p[0][0]][--p[0][1]] = c;
		x[--p[1][0]][++p[1][1]] = c;
		x[++p[2][0]][++p[2][1]] = c;
		x[++p[3][0]][--p[3][1]] = c;
	}
	for(int i=2; i<s*2; i++){
		x[++p[0][0]][--p[0][1]] = c;
		x[--p[1][0]][--p[1][1]] = c;
		x[--p[2][0]][++p[2][1]] = c;
		x[++p[3][0]][++p[3][1]] = c;
	}
	for(int i=2; i<s*2; i++){
		x[++p[0][0]][++p[0][1]] = c;
		x[++p[1][0]][--p[1][1]] = c;
		x[--p[2][0]][--p[2][1]] = c;
		x[--p[3][0]][++p[3][1]] = c;
	}
	for(int i=2; i<s; i++){
		x[--p[0][0]][++p[0][1]] = c;
		x[++p[1][0]][++p[1][1]] = c;
		x[++p[2][0]][--p[2][1]] = c;
		x[--p[3][0]][--p[3][1]] = c;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cout << x[i][j] << ' ';
		cout << endl;
	}
}

int main(){
	int choice;
	while(1){
		cout << "\n\n---Symbols------------------------------Numbers------------------------------" << endl;
		cout << " 1.Solid Rectangle                      21.Half Pyramid" << endl;
		cout << " 2.Hollow Rectangle                     22.Inverted Half Pyramid" << endl;
		cout << " 3.Half Pyramid                         23.Hollow Inverted Half Pyramid" << endl;
		cout << " 4.Inverted Half Pyramid                24.Full Pyramid" << endl;
		cout << " 5.Hollow Inverted Half Pyramid         25.Hollow Full Pyramid" << endl;
		cout << " 6.Full Pyramid                         26.Hollow Half Pyramid" << endl;
		cout << " 7.Inverted Full Pyramid                27.Palindrome Pyramid" << endl;
		cout << " 8.Hollow Full Pyramid                  28.Palindrome Alphabet Pyramid" << endl;
		cout << " 9.Solid Diamond                        29.Palindrome Star Pyramid" << endl;
		cout << "10.Hollow Diamond                       30.Palindrome Pyramid Centered" << endl;
		cout << "11.Solid Half Diamond                   31.Solid Half Diamond 1" << endl;
		cout << "12.Diamond Square                       32.Solid Half Diamond 2" << endl;
		cout << "13.Butterfly                            33.Solid Half Diamond 3" << endl;
		cout << "14.X in Square                          34.Solid Half Diamond 4" << endl;
		cout << "15.+ in Diamond                         35.Number Mountain 1" << endl;
		cout << "16.Left Arrow                           36.Number Mountain 2" << endl;
		cout << "17.Right Arrow" << endl;
		cout << "18.Solid Rhombus                         ------" << endl;
		cout << "19.Hollow Rhombus                        0.Exit" << endl;
		cout << "20.Special Pattern                       ------" << endl;
		cout << "--------------------------------------------------------------------------------" << endl;
		cout << "-> ";
		cin >> choice;
		cout << string(100,'\n');
		switch(choice){
		    case  0: return 0;
			case  1: solidRectangle();                  break;
			case  2: hollowRectangle();                 break;
			case  3: halfPyramid();                     break;
			case  4: invertedHalfPyramid();             break;
			case  5: hollowInvertedHalfPyramid();       break;
			case  6: fullPyramid();                     break;
			case  7: invertedFullPyramid();             break;
			case  8: hollowFullPyramid();               break;
			case  9: solidDiamond();                    break;
			case 10: hollowDiamond();                   break;
			case 11: solidHalfDiamond();                break;
			case 12: diamondSquare();                   break;
			case 13: butterfly();                       break;
			case 14: xInSqare();                        break;
			case 15: plusInDiamond();                   break;
			case 16: leftArrow();                       break;
			case 17: rightArrow();                      break;
			case 18: solidRhombus();                    break;
			case 19: hollowRhombus();                   break;
			case 20: specialPattern();                  break; 
			case 21: halfPyramidNum();                  break;
			case 22: invertedHalfPyramidNum();          break;
			case 23: hollowInvertedHalfPyramidNum();    break;
			case 24: fullPyramidNum();                  break;
			case 25: hollowFullPyramidNum();            break;
			case 26: hollowHalfPyramidNum();            break;
			case 27: palindromePyramidNum();            break;
			case 28: palindromePyramidAlphabet();       break;
			case 29: palindromeStarPyramidNum();        break;
			case 30: palindromePyramidCenteredNum();    break;
			case 31: solidHalfDiamond1Num();            break;
			case 32: solidHalfDiamond2Num();            break;
			case 33: solidHalfDiamond3Num();            break;
			case 34: solidHalfDiamond4Num();            break;
			case 35: numberMountain1();                 break;
			case 36: numberMountain2();                 break;
			default:
				cout << "\nInvalid choice." << endl;
		}
	}
	return 0;
}
