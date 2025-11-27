#include <stdio.h>
#include <string.h>

struct Flight {
    char flightNo[10];
    char departure[50];
    char destination[50];
    char date[20];
    int availableSeats;
};

void displayFlight(struct Flight f) {
    printf("Flight Number: %s\n", f.flightNo);
    printf("From: %s\n", f.departure);
    printf("To: %s\n", f.destination);
    printf("Date: %s\n", f.date);
    printf("Available Seats: %d\n", f.availableSeats);
}

void bookSeat(struct Flight *f) {
    if (f->availableSeats > 0) {
        f->availableSeats--;
        printf("Seat booked successfully! Remaining seats: %d\n", f->availableSeats);
    } else {
        printf("No seats available.\n");
    }
}

int main() {
    struct Flight flight1 = {"PK123", "Karachi", "Lahore", "2025-12-25", 5};

    int choice;
    do {
        printf("\n1. Display Flight\n2. Book a Seat\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                displayFlight(flight1);
                break;
            case 2:
                bookSeat(&flight1);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(choice != 3);
    return 0;
}

