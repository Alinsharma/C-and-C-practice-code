#include<stdio.h>
int main(){
int a;
int i=2;
scanf("%d",&a);
do {
   
    i++;
}
while (i<a);
if (i%a==0){

    printf("not prime");
    return 0;

}


    printf("prime");






}
