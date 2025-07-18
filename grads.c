#include<stdio.h>
int main()
{
int marks;
scanf("%d",&marks);

if(marks<=28){
printf("just pass");
}
else if(marks<=45)
{
printf("D");

}
else if(marks<=65)
{
printf("c");
}
else if(marks<=75)
{
printf("B++");}
else if(marks<=85)
{
printf("A");}
else if(marks<=100)
{
printf("A++");
}
else
{
printf("no");
}

}
