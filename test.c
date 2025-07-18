#include<stdio.h>
int main()
{
int a,b,c,d;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
int z=(a+b+c+d)*100/400;
if(z<=20)
{
    printf("fail");
}
else if(z<=40)
{
    printf("D");

}
else if(z<=60)
{
    printf("C");

}
else if(z<=75)
{
    printf("B");

}
else if(z<=85)
{
    printf("A");

}
else if(z<=100)
{
    printf("A++");

}
    
}