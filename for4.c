#include<stdio.h>
int main(){
    int a;
    int b;
    for(a=1;a<=5;a++){
        for(b=1;b<=a;b++){
            printf(" ");
        }for(b=5;b>=a;b--){
            printf(" *");
        }printf("\n");
    }
}