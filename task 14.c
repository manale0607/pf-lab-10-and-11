#include <stdio.h>
#include <time.h>

int main() {
    FILE *fp;
    time_t now;
    char *timeStr;

    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Unable to open data file!\n");
        return 1;
    }

    time(&now);
    timeStr = ctime(&now);  

    fprintf(fp, "Program run at: %s", timeStr);
    fclose(fp);

    printf("Timestamp added to data.txt\n");

    return 0;
}

