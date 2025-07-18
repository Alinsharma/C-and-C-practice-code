#include<stdio.h>
int main(){
    int i;
    int j;
    for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            printf(" ");
        }for(j=1;j<=i;j++){
            if(j==1||j==i){
                printf("* ");
            }else{
                printf("  ");
            }
        }printf("\n");
    }

    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }for(j=5;j>=i;j--){
           if(j==5||j==i){
            printf("* ");
           }else{
            printf("  ");
           }
        }printf("\n");
    }

}



