#include <stdio.h>
#include <string.h>

struct Movie {
    char title[50];
    char genre[20];
    char director[50];
    int releaseYear;
    float rating;
};

struct Movie movies[100];
int movieCount = 0;

void addMovie() {
    struct Movie m;
    printf("Enter title: "); 
	scanf(" %[^\n]", m.title);
    printf("Enter genre: "); 
	scanf(" %[^\n]", m.genre);
    printf("Enter director: "); 
	scanf(" %[^\n]", m.director);
    printf("Enter release year: "); 
	scanf("%d", &m.releaseYear);
    printf("Enter rating: "); 
	scanf("%f", &m.rating);

    movies[movieCount++] = m;
    printf("Movie added successfully!\n");
}

void searchByGenre(char genre[]) {
    printf("Movies in genre %s:\n", genre);
    int i;
    for(i = 0; i < movieCount; i++) {
        if(strcmp(movies[i].genre, genre) == 0) {
            printf("%s (%d), Director: %s, Rating: %.1f\n",
                   movies[i].title, movies[i].releaseYear,
                   movies[i].director, movies[i].rating);
        }
    }
}

void displayAll() {
	int i;
    for(i = 0; i < movieCount; i++) {
        printf("%s | %s | %s | %d | %.1f\n",
               movies[i].title, movies[i].genre,
               movies[i].director, movies[i].releaseYear,
               movies[i].rating);
    }
}

int main() {
    int choice;
    char genre[20];

    do {
        printf("\n1. Add Movie\n2. Search by Genre\n3. Display All\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: 
			    addMovie(); 
			    break;
            case 2:
                printf("Enter genre to search: ");
			    scanf(" %[^\n]", genre);
                searchByGenre(genre);
                break;
            case 3:  
			    displayAll(); 
				break;
            case 4:  
			    printf("Exiting...\n"); 
			    break;
            default: 
			    printf("Invalid choice\n");
        }
    } while(choice != 4);

    return 0;
}

