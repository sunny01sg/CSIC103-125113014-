#include <stdio.h>

int main() {
    char sourceFile[100], destFile[100];
    char ch;

    printf("Enter the source filename: ");
    scanf("%s", sourceFile);

    printf("Enter the destination filename: ");
    scanf("%s", destFile);

    FILE *src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    FILE *dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error creating destination file!\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("Contents copied from %s to %s successfully.\n", sourceFile, destFile);

    return 0;
}
