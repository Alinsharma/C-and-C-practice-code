#include<stdio.h>
    int a(int x){
        if(x==1){
            return 1;
        }else{
            return x*a(x-1);
        }
    }
    int main(){ 
        printf("%d",a(5));

    }






