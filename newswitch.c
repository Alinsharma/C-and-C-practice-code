#include<stdio.h>
int main()
{
int a,b;
char v;
printf("enter 2 int \n");
scanf("%d %d",&a,&b);
scanf(" %c",&v);
switch(v)
{
    case '+':
    printf("%d", a+b);
    break;

    case '-':
    printf("%d", a-b);
    break;

    case'%':
    printf("%d", a%b);
    break;

    default:
    printf("no");
    break;






}


}