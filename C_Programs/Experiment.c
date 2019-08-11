#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	unsigned year_int;
	char year_char[20];
	printf("Enter year : ");
	scanf("%i",&year_int);
	sprintf(year_char,"%i",year_int);
	char x[20]="cal ";
	strcat(x,year_char);
	system(x);
	return 0;
}
