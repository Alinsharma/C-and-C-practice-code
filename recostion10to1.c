#include<stdio.h>
int a(int c){

    if (c==1){
        
    }
    else{
        printf("%d\n",c);
        a(c-1);
    }

}
int main(){
    printf("%d",a(10));
}
