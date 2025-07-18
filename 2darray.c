#include<stdio.h>
int main(){
    //int a[2][3]={{2,4,50},{4,5,6}};
    int a[2][3];
    int i,j;
   
    
    for(i= 0; i<=1; i++)
    {
        for(j=0; j<=2; j++)
        {
            scanf("%d",&a[i][j]);
        }
         
        
    }
    for(i= 0; i<=1; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("%d",a[i][j]);
        }
         printf("\n");
        
    }
   
    
   
    
}