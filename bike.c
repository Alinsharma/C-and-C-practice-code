#include<stdio.h>
int main()
{
    int a,c,d,s;
    printf("enter a number ");
    scanf("%d",&a);
    if(a==50000)
    {
        c=a*15/100;
        printf("%d",a-c);
    }
    else if(a<=50000 && a>=25000)
    {
        d=a*10/100;
        printf("%d",a-d);


    }
    else if(a<=25000)
    {
        s=a*5/100;
        printf("%d",a-s);
    }


    else {
        printf("no");
    }
}