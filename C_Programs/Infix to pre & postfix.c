#include<stdio.h>
#include<string.h>
char stack[20],str[50]="a+b",ans[50],next,*p,*pa;
int top=-1,rank;
int r(char x){
	if(x=='(') return 0;
	else if(x=='+'||x=='-') return 1;
	else if(x=='*'||x=='/') return 2;
	else if(x=='^'||x=='$') return 3;
	else if((x>='a'&&x<='z')||(x>='A'&&x<='Z')||(x>='0'&&x<='9')) return 4;
	else if(x==')') return 9;
	else return 5;}
void rnk(){ int i; rank=0;
    for(i=0;ans[i]!='\0';i++){
            if(r(ans[i])==1||r(ans[i])==2||r(ans[i])==3) rank--;
            else rank++;}}
void push(char x){
	stack[++top]=x;}
int pop(){
	return stack[top--];}
void postfix(){ p=str; pa=ans;
	push('(');
	while(*p!='\0'){
		if(*p=='(') push(*p);
		else if(*p==')'){
			while(stack[top]!='(') {*pa=pop(); pa++;}pop();}
		else if(*p=='^'||*p=='$'){
			while(r(*p)<r(stack[top])){*pa=pop(); pa++;}
			push(*p);}
		else{
			while(r(*p)<=r(stack[top])){*pa=pop(); pa++;}
			push(*p);}
		p++;}
	while(top>0) {*pa=pop(); pa++;}
	*pa='\0';
}
void prefix(){ int l; p=str; pa=ans;
	strrev(str);
	for(l=0;str[l]!='\0';l++){
		if(str[l]=='(') str[l]=')';
		else if(str[l]==')') str[l]='(';}
	postfix();
	strrev(ans);
}
void main(){
	int choice;
	printf("\nSelect Operation :\n1.INFIX TO POSTFIX    2.INFIX TO PREFIX\n");
	scanf(" %i",&choice);
	switch(choice){
		case 1: printf("\nEnter Equation :\n"); scanf(" %s",str);
				postfix(); rnk();
                if(rank==1) printf("\n\nEquation after POSTFIX :\n%s\n\n",ans);
                else printf("\nWrong Equation.\n----- ---------\n");
				break;
		case 2: printf("\nEnter Equation :\n"); scanf(" %s",str);
				prefix(); rnk();
				if(rank==1) printf("\n\nEquation after PREFIX :\n%s\n\n",ans);
				else printf("\nWrong Equation.\n----- ---------\n");
				break;
		default: printf("\nEnter valid choice.\n");}
		printf("Enter anything to exit.\n");
		scanf(" %c",&choice);}
