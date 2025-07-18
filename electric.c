#include<stdio.h>
int main()
{
    int a,c;
    printf("enter a value ");
    scanf("%d",&a);
    if(a<=100)
    {
    printf("0");
    }
    else if(a<=200)
    {
        c=a-100;
        printf("%d",c*5);
    }
    else if(a<=400)
    {
    c=a-100;
    printf("%d",c*7);
    }
    else{
        printf("no");
    }




}