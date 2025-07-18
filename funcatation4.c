#include<stdio.h>
void opo(int a){
    printf("%d\n",a);
    
    if(a %2== 0){
        printf("even"); 
    }
    else{
        printf("odd");
    }printf("\n");
}
int main(){

    opo(8);
    opo(117);
    opo(116);
    

}