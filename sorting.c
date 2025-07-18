#include<stdio.h>
int main(){
    int i;
    int j;
    int k;
    int temp;
    int a[10]={10,25,5,6,85,45};
    for(i=0;i<=5;i++){
        for(j=i+1;j<=5;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
    
            for(k=0;k<=5;k++){
                printf("%d\n",a[k]);
            }
            int l;
            int s;
           
           

            l=a[0];
            s=a[5];

 printf("largest number is\n");
            printf("%d\n",l);
             printf("smallest number is\n");
            printf("%d",s);

        }
    


