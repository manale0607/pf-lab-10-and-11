#include <stdio.h>

int main() {
    FILE *f1, *f2, *fout;
    char ch;

    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");
    fout = fopen("merged.txt", "w");

    if (f1 == NULL || f2 == NULL || fout == NULL) {
        printf("Error opening files!\n");
        return 1;
    }
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, fout);
    }
    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, fout);
    }

    printf("Files merged successfully into merged.txt\n");

    fclose(f1);
    fclose(f2);
    fclose(fout);

    return 0;
}

