#include<stdio.h>
int main()
{
    int a;
    printf("enter number\n");
    scanf("%d",&a);
    int n=a;
    int sum=0;
    int r;
    while (a!=0)
    {
        r=a%10;
        sum=(sum*10)+r;
        a=a/10;
    }
        if(n!=sum){
            printf("it is not a palandome");

        }
        else 
        {
            printf("a plandomme");
            
        }
    

    }
    



