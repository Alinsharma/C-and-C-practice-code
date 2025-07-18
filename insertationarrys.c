#include<stdio.h>
int main(){
int a[100]={5,4,50,8,78};
int i;
int pos=1;
for(i=0;i<=5;i++){
a[i-1]=a[i];
}

for(i=0;i<=5;i++){
    printf("%d\n",a[i]);
}




}