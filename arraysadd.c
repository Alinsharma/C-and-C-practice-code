#include<stdio.h>
int main(){
    int a[10]={2,3,4,5,6,7};
    int i;
    int sum=0;
    for(i=0;i<=5;i++){
        sum=sum+a[i];

        printf("%d\n",sum);
        
    }
}