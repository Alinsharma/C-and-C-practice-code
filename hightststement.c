#include<stdio.h>
int main()
{
    int a,b,c;
    printf("number plx : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if(a>c && a>b){
        printf("a chota ");
    }
    else if(b>a && b>c){
        printf("b theek h ");
    }
    else{
        printf("c bhut bdha h");
    }
}