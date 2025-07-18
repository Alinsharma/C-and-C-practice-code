#include<stdio.h>
int main(){
    int i;
    int j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
            for(j=5;j>=i;j--){
                if(i==1||j==5||j==i){
                    printf("* ");}
                    else{
                        printf("  ");
                    }
                
            


            }printf("\n");


        }
        
    }



