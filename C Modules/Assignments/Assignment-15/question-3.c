#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[100];
    int matches;
    int runs;
    int wickets;
} players;

void store(players *team);
void display(players *team);
void top_players(players *team);
int playercount = 10;
int i;
int main()
{
    players team[10];

    store(team);
    display(team);
    top_players(team);

    return 0;
}

void store(players *team)
{
    for (int i = 0; i < playercount; i++)
    {
        printf("Enter the player name:");
        scanf(" %[^\n]", team[i].name);
        printf("Enter the player no.of matches played:");
        scanf("%d", &team[i].matches);
        printf("Enter the player how many runs made:");
        scanf("%d", &team[i].runs);
        printf("Enter the player took wickets:");
        scanf("%d", &team[i].wickets);
    }
}

void display(players *team)
{
    printf("Players info");
    for (int i = 0; i < playercount; i++)
    {
        printf("player name: %s\n", team[i].name);
        printf("matches played by player: %d\n", team[i].matches);
        printf("runs made by player: %d\n", team[i].runs);
        printf("no.of wickets: %d\n", team[i].wickets);
    }
}

void top_players(players *team)
{
    int maxruns, maxwickets;
    maxruns = team[0].runs;
    maxwickets = team[0].wickets;
    int runindex = 0, wicketindex = 0;

    for (int i = 1; i < playercount; i++)
    {
        if (team[i].runs > maxruns)
        {
            maxruns = team[i].runs;
            runindex = i;
        }

        if (team[i].wickets > maxwickets)
        {
            maxwickets = team[i].wickets;
            wicketindex = i;
        }
    }
    printf("\n=======Top players=======\n");
    printf("players with Maximum runs");
    printf("Name: %s\n", team[runindex].name);
    printf("Runs: %d\n", team[runindex].runs);

    printf("\nPlayer with Maximum Wickets:\n");
    printf("Name: %s\n", team[wicketindex].name);
    printf("Wickets: %d\n", team[wicketindex].wickets);
}
