#include<stdio.h>
int main()
{
    int a[10]={1,5,64,40,2,3,41,2};
    int i;
    int j;
    int k;
    int temp; 
    for(i=0;i<=7;i++){
        for(j=i+1;j<=7;j++){
            if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;}

        }

        
    }
    for(k=0;k<=7;k++){
            printf("%d\n",k[a]);
    }
    
    
    
    

        

}