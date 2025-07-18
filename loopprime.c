#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int i=2;
    
    while (i<a)
    {
        if(a%i==0){

            printf("not prime");
            return 0;
        }
        i++;
    }
    
    printf("prime");
    




}