#include<stdio.h>
int main(){
    int a;
    int i;

    for(a=1;a<=5;a++){
        for(i=5;i>=a;i--){
            printf("  ");
        }for(i=1;i<=a;i++){
            printf(" *  ");
        }printf("\n");
    }







}