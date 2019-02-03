/*
    You can not use string as a class name cause when you declare object it can't because of string is keyword and data type in c++
    so it'll give error
    so i used "String" name.

    Note: in pointer string in first initialization can be directly assigned(copy) by using '=' (if delete is used than it's not first assign)
    
    Regards Manish.
*/

#include <iostream>  // Headers.
#include <cstring>  // C header for string operations.
#include <iomanip>  // For allignment of the text.
using namespace std;
class String
{
        char *name; // String is also data type by using it you also can create program, you just have make changes in program.
        int length;
    public:
	String(){
		length=0;
		name= new char[length+1];
		name="";}      //Also can write only name="" and it'll automatically set size 1 and add '\0';
	String(String &s){ // you can also use parameter without using &;
		length=s.length;
		name=new char[length+1];
		name=s.name;} //
	String(char* s){   //Here String(char s[]) also can be used but String(char &s) can not be used.
		length=strlen(s);
		name=s;}
	void join(String &s1,String &s2){ // you can also use parameter without using &;
		delete name;
		length=s1.length+s2.length;
		name=new char[length+1];
		strcpy(name,s1.name); //here can not assign string using '='
		strcat(name,s2.name);}
	void add(char* s){
		length=length+strlen(s);
		char* temp=name;
		delete name;
		name=new char[length+1];
		strcpy(name,temp);
		strcat(name,s);}
	void print(){
		cout<<setw(20)<<name;
		cout<<" "<<length<<endl;}
};

int main()
{
	char* x="Hello";
	String str(x);
	String str1(" world");
	String str2;
	str2.join(str,str1);
	String str3(str2);
    str.add(" world");

    str.print();
    str1.print();
    str2.print();
    str3.print();
	return 0;
}
