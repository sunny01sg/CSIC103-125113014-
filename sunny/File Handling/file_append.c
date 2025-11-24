#include <stdio.h>

int main() {
    char filename[100];
    char text[500];

    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append to the file:\n");
    getchar();
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);
    printf("Text has been appended to %s\n", filename);

    return 0;
}
