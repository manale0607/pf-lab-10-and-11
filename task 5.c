#include <stdio.h>
#include <string.h>

struct Player {
    char name[50];
    int age;
    char position[20];
};

struct Team {
    char name[50];
    char sport[20];
    struct Player players[50];
    int playerCount;
};

void addPlayer(struct Team *team) {
    struct Player p;
    printf("Enter player name: "); 
	scanf(" %[^\n]", p.name);
    printf("Enter age: "); 
	scanf("%d", &p.age);
    printf("Enter position: "); 
	scanf(" %[^\n]", p.position);

    team->players[team->playerCount++] = p;
    printf("Player added successfully!\n");
}

void searchByPosition(struct Team team, char position[]) {
    printf("Players in position %s:\n", position);
    int i;
    for(i = 0; i < team.playerCount; i++) {
        if(strcmp(team.players[i].position, position) == 0) {
            printf("%s, Age: %d\n", team.players[i].name, team.players[i].age);
        }
    }
}

void displayTeam(struct Team team) {
    printf("Team: %s | Sport: %s\n", team.name, team.sport);
    printf("Players:\n");
    int i;
    for(i = 0; i < team.playerCount; i++) {
        printf("%s | Age: %d | Position: %s\n",
               team.players[i].name,
               team.players[i].age,
               team.players[i].position);
    }
}

int main() {
    struct Team team1 = {"Warriors", "Football", {}, 0};

    int choice;
    char position[20];
    do {
        printf("\n1. Add Player\n2. Search by Position\n3. Display Team\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
			     addPlayer(&team1); 
				 break;
            case 2:
                 printf("Enter position: "); 
				 scanf(" %[^\n]", position);
                searchByPosition(team1, position);
                break;
            case 3: 
			     displayTeam(team1); 
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

