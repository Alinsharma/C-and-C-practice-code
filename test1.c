#include<stdio.h>
int main()
{
    int bike;
    scanf("%d",&bike);
    if(bike>=100000)
    {
        printf("%d",100000*15/100);
    }
    else if(bike>150000)
    {
        printf("%d",150000*20/100);
    }
    else if(bike>200000)
    {
        printf("%d",200000*25/100);
    }
    else
    {
        printf("nonkonojjij");
    }

}