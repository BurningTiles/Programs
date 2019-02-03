#include <stdio.h>
     
   void main(){
        int a[5];
        int i;
        for(i = 0;i<5;i++){
            a[i]=i;
        }
     
        int *b;  
       
        b=a;     
        for(i = 0;i<5;i++){
            printf("value in array %d and address is %16lu\n",*b,b);
            b=b+1;
        }
}