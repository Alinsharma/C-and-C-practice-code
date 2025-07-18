#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const char *keywords[] = {
    "auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else",
    "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", "return",
    "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned",
    "void", "volatile", "while"
};
const int num_keywords = sizeof(keywords) / sizeof(keywords[0]);

bool yehhkyakeyword(const char *word) {
    for (int i = 0; i < num_keywords; ++i) {
        if (strcmp(word, keywords[i]) == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    FILE *file = fopen("file.txt", "r");
    int count=0;
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char word[100];
    while (fscanf(file, "%99s", word) == 1) {
        if (yehhkyakeyword(word)) {
            printf("'%s' is a keyword.\n", word);
            count+=1;
        } else {
            printf("'%s' is not a keyword.\n", word);
        }
    }
    printf("isme %d keywords h",count);
    fclose(file);
    return 0;
}
