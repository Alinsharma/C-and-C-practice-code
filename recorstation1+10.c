#include<stdio.h>
int a(int x){
    if(x==11){
        return 0;
        

    }else{
        
        return x +a(x+1);
        

    }
}int main(){
    printf("%d",a(1));
}