#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    char ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == '\n')
            lines++;

        if (isspace(ch))
            inWord = 0;
        else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("\nCharacters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lin
