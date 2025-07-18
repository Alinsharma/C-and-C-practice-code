#include<stdio.h>

int main() {
    char x, y, z;

    printf("Congratulations! You are selected for KBC by...... Sanjoli.\n There are 3 questions. If you win, the next question will appear.\n");
    
    printf("Terms and conditions: You'll get 30 seconds to answer. Answering one question wrong and you are out.\n");

    printf("\nQ1: Who is the current railway minister of India?\n");
    printf("a) Mamta Banarjee\n");
    printf("b) Ram Vilash\n");
    printf("c) Ashwini Vaishnav\n");
    scanf(" %c", &x);

    if (x == 'c') {
        printf("\nQ2: Which city is known as the Silicon Valley of India?\n");
        printf("a) Delhi\n");
        printf("b) Bangalore\n");
        printf("c) Mumbai\n");
        scanf(" %c", &y);

        if (y == 'b') {
            printf("\nQ3: Which is not a state of India?\n");
            printf("a) Goa\n");
            printf("b) Jaipur\n");
            printf("c) Bangalore\n");
            scanf(" %c", &z);

            if (z == 'b') {
                printf("\nCongratulations! You won. You have earned 10 rupees.\n");
            } else {
                printf("\nYou lost. Your penalty is 2000 rupees.\n");
            }
        } else {
            printf("\nYou lost. Get lost!\n");
        }
    } else {
        printf("\nYou lost. Get lost!\n");
    }

    return 0;
}