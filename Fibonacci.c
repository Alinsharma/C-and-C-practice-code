#include<stdio.h>
int main(){
int a=0;
int b=1;
int i=1;
int c;
while (i<=10)
{
    c=a+b;
    printf("%d\n",c);
    a=b;
    b=c;
    i++;
}






}