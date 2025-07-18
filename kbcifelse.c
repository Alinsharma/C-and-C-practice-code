#include<stdio.h>
int main()
{
    char a,b,c,d;
    printf("you are select for kbc\n\n ");
    printf("  To scale Mount Everest, mountaineers need to go to _____ ?\n\n");
    printf("a. Afghanistan\n ");
    printf("b. Bhutan \n");
    printf("c. Nepal \n");
    printf("d. Myanmar\n ");
    printf("ur  answer:");
    scanf("  %c",  &a);
    if (a== 'c'){
        printf("yes u are write\n\n ");
        printf("New Delhi's Lotus Temple was designed by an architect from _____ ?");
        printf("a. Germany \n");
        printf("b .Iran\n");
        printf("c. uae \n");
        printf("d. japan\n");
        scanf(" %c",&b);
        if(b=='b'){
            printf("yes u are right\n\n");
            printf("The National Game of Bhutan is ?\n");
            printf("a. archery\n");
            printf("b. shooting\n");
            printf("c. cooking\n");
            printf("d. wrestling\n ");
            scanf(" %c", &c);
            if (c== 'a')
            {
                printf("yes you are right");
                printf("Which country is called the (Coffee Bowl of the World) ?\n");
                printf(" a. Serbia \n");
                printf("b. Mexico  \n");
                printf("c. India  \n");
                printf("d. Brasil\n");
                scanf(" %c", &d);
                if(d=='d'){
                    printf("you win the match");
                }
                else{
                    printf("you lost the match");
                    } 
            }else{
                printf(" you lost the game ");
            }       




        }else{
            printf("you lost the game");
        }
        
    }else{
        printf("you lost the game");
    } 
    
} 





