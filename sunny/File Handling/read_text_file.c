#include <stdio.h>

int main() {
    char filename[100];
    char ch;

    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nContents of %s:\n", filename);
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
