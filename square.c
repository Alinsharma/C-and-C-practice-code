#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    for(a=1;a<=4;a++){
        for(b=1;b<=4;b++){
            if(a==1||a==4||b==1||b==4)
            printf(" *");
            else
            {
                printf("  ");
            }





        }printf("\n");
    }



}