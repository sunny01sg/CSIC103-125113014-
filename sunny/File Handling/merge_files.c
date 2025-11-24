#include <stdio.h>

int main() {
    char file1[100], file2[100], file3[100];
    char ch;
    FILE *fp1, *fp2, *fp3;

    printf("Enter the first filename: ");
    scanf("%s", file1);
    printf("Enter the second filename: ");
    scanf("%s", file2);
    printf("Enter the destination filename: ");
    scanf("%s", file3);

    fp1 = fopen(file1, "r");
    if (fp1 == NULL) {
        printf("Error opening %s!\n", file1);
        return 1;
    }

    fp2 = fopen(file2, "r");
    if (fp2 == NULL) {
        printf("Error opening %s!\n", file2);
        fclose(fp1);
        return 1;
    }

    fp3 = fopen(file3, "w");
    if (fp3 == NULL) {
        printf("Error creating %s!\n", file3);
        fclose(fp1);
        fclose(fp2);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp3);
    }

    while ((ch = fgetc(fp2)) != EOF) {
        fputc(ch, fp3);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("Files merged successfully into %s\n", file3);

    return 0;
}
