#include<stdio.h>
int main()
{
   
    int a=2;
    int i;
    scanf("%d",&i);
    while(a<i)
    {
        if(i%a==0 || i%3==0 || i%5==0){
        printf("it is not a prime");
        
        break;
        
        }
        else
        {
            printf("it is prime");
            i++;
            break;
            
            }

    }
    
      return 0;
}