#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void displayQuestion(char *question, char *choices[], char correctAnswer);
int checkAnswer(char answer, char correctAnswer);

int main() {
    // Questions, choices, and correct answers
    char *question1 = "What is the capital of France?";
    char *choices1[] = {"A. Berlin", "B. Madrid", "C. Paris", "D. Rome"};
    char correctAnswer1 = 'C';

    char *question2 = "Which planet is known as the Red Planet?";
    char *choices2[] = {"A. Earth", "B. Mars", "C. Jupiter", "D. Saturn"};
    char correctAnswer2 = 'B';

    char *question3 = "What is the largest ocean on Earth?";
    char *choices3[] = {"A. Atlantic Ocean", "B. Indian Ocean", "C. Arctic Ocean", "D. Pacific Ocean"};
    char correctAnswer3 = 'D';

    // Game start
    int score = 0;
    char userAnswer;

    printf("Welcome to KBC Quiz Game!\n\n");

    // Ask questions
    printf("Question 1:\n");
    displayQuestion(question1, choices1, correctAnswer1);
    printf("Your answer: ");
    scanf(" %c", &userAnswer);
    if (checkAnswer(userAnswer, correctAnswer1)) {
        score++;
        printf("Correct!\n\n");
    } else {
        printf("Wrong. The correct answer was %c.\n\n", correctAnswer1);
    }

    printf("Question 2:\n");
    displayQuestion(question2, choices2, correctAnswer2);
    printf("Your answer: ");
    scanf(" %c", &userAnswer);
    if (checkAnswer(userAnswer, correctAnswer2)) {
        score++;
        printf("Correct!\n\n");
    } else {
        printf("Wrong. The correct answer was %c.\n\n", correctAnswer2);
    }

    printf("Question 3:\n");
    displayQuestion(question3, choices3, correctAnswer3);
    printf("Your answer: ");
    scanf(" %c", &userAnswer);
    if (checkAnswer(userAnswer, correctAnswer3)) {
        score++;
        printf("Correct!\n\n");
    } else {
        printf("Wrong. The correct answer was %c.\n\n", correctAnswer3);
    }

    // Final score
    printf("Your final score is %d out of 3.\n", score);
    
    return 0;
}

void displayQuestion(char *question, char *choices[], char correctAnswer) {
    printf("%s\n", question);
    for (int i = 0; i < 4; i++) {
        printf("%s\n", choices[i]);
    }
}

int checkAnswer(char answer, char correctAnswer) {
    return (answer == correctAnswer);
}