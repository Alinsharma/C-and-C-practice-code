#include<stdio.h>
int main()
{
    int a[10]={1,5,64,40,2,3,41,2};
    int i;
    int j;
    for(i=0;i<=7;i++){
        
            if(a[i]%2==0){
            printf("%d\n",a[i]);}
    }
    for(j=0;j<=7;j++){
        if(a[j]%2!=0){
            printf("%d\n",a[j]);
        }
    }
    
    
    
    
    

        

}