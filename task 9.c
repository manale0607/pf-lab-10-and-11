#include <stdio.h>

int linearSearch(int arr[], int size, int target, int index) {
    if (index == size)          // reached end
        return -1;

    if (arr[index] == target)   // found
        return index;

    return linearSearch(arr, size, target, index + 1);
}

int main() {
    int arr[5] = {3, 8, 1, 9, 7};
    int target;

    printf("Enter value to search: ");
    scanf("%d", &target);

    int result = linearSearch(arr, 5, target, 0);

    if (result == -1)
        printf("Not Found\n");
    else
        printf("Found at index %d\n", result);

    return 0;
}

