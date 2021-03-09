/**
 * Author  : BurninTiles
 * Created : 2020-10-01 18:12:50
 * Link    : GitHub.com/BurninTiles
 * Program : 
**/

#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

bool check(string str) {
	stack<char> stk;
	char ch;
	for(int i=0; i<str.size(); i++){
		ch = str[i];
		if(ch == '(' || ch == '[' || ch == '{'){
			stk.push(ch);
			continue;
		}
		if(ch == ')' || ch == ']' || ch == '}'){
			if(stk.size()==0)
				return false;
			switch(ch){
				case ')':
					if(stk.top()=='(') stk.pop();
					else return false;
					break;
				case ']':
					if(stk.top()=='[') stk.pop();
					else return false;
					break;
				case '}':
					if(stk.top()=='{') stk.pop();
					else return false;
					break;
			}
		}
	}
	return stk.size() ? false : true ;
}

int main(){

	ifstream in("input.txt");
	ofstream out("output.txt");

	if (in.fail()){
		cerr<<"Error in openning input file."<<endl;
		return -1;
	}
	if (out.fail()){
		cerr<<"Error in creating output file."<<endl;
		return -2;
	}

	string str;
	bool flag;
	while (in >> str){
		flag = check(str);
		//cout << flag << endl;
		if(flag){
			cout << "The expression is balanced\n";
			out << "The expression is balanced\n";
		}
		else{
			cout << "The expression is not balanced\n";
			out << "The expression is not balanced\n";
		}
	}

	in.close();
	out.close();

	return 0;
}

/**

Question : 
HW3.pdf

**/