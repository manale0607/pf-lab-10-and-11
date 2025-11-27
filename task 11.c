#include <stdio.h>
#include <string.h>

int main() {
    char words[5][20] = {"apple", "banana", "orange", "mango", "grape"};
    char search[20];
    int i, found = 0;

    printf("Enter a word to search: ");
    scanf("%s", search);

    for (i = 0; i < 5; i++) {
        if (strcmp(words[i], search) == 0) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Found\n");
    else
        printf("Not Found\n");

    return 0;
}

