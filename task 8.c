#include <stdio.h>

#define M_TO_KM 0.001   
float convert(int meters) {
    static int count = 0;  
    count++;

    printf("Function called %d times.\n", count);

    return meters * M_TO_KM;
}

int main() {
    int m;

    printf("Enter meters: ");
    scanf("%d", &m);

    float km = convert(m);
    printf("Kilometers = %.3f\n", km);

    printf("\nEnter meters again: ");
    scanf("%d", &m);

    km = convert(m);
    printf("Kilometers = %.3f\n", km);

    return 0;
}

