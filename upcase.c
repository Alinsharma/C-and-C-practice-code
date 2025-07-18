#include<stdio.h>
int main()
{
    char a;
    printf("enter a caracter");
    scanf("%c",&a);
    if((a>='A') && (a<='Z'))
    {
        printf("THE CHAR BELONG TO UPPER CASE");
    }
    else if((a>='a') && (a<='z'))
    {
        printf("THE CHAR BELONG TO LOWE CASE");
    }
    else{
        printf("no" );

    }
}