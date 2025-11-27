#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Cannot open file!\n");
        return 1;
    }
    fclose(fp);

    printf("Contents deleted.\n");

    fp = fopen("data.txt", "r");

    if (fgetc(fp) == EOF)
        printf("File is empty.\n");
    else
        printf("File is NOT empty.\n");

    fclose(fp);
    return 0;
}

