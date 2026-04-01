#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char title[100];
    char director[100];
    int year;
    char genre[50];
} movie_DB;

void addmovie(movie_DB *mdb, int n);
void search_movie(movie_DB *mdb, int n);
void update_movie_records(movie_DB *mdb, int n);

int main()
{
    int n;
    movie_DB *mdb;
    
    printf("Enter no.of movies to add:");
    scanf("%d", &n);
    mdb = (movie_DB *)malloc(n * sizeof(movie_DB));
    if (mdb == NULL)
    {
        printf("FAILED TO ALLOCATE MEMORY!!");
        return 0;
    }
    addmovie(mdb, n);
    int choice;

    printf("1.search movie:\n");
    printf("2.update movie records:\n");
    printf("Enter the choice:");
    scanf("%d", &choice);

    if (choice == 1)
    {
        search_movie(mdb, n);
    }
    if (choice == 2)
    {
        update_movie_records(mdb, n);
    }
    else
    {
        printf("Invalid input!!\n");
    }

    free(mdb);
    return 0;
}

void addmovie(movie_DB *mdb, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("Enter details of movie-%d:\n", i + 1);
        printf("Enter tne movie title:");
        scanf(" %[^\n]", mdb[i].title);
        printf("Enter tne movie director:");
        scanf(" %[^\n]", mdb[i].director);
        printf("Enter tne movie release year:");
        scanf("%d", &mdb[i].year);
        printf("Enter tne movie genre:");
        scanf(" %[^\n]", mdb[i].genre);
    }
}
void search_movie(movie_DB *mdb, int n)
{
    char search[100];
    int found = 0;
    printf("Enter title to search:");
    scanf(" %[^\n]", search);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(mdb[i].title, search) == 0)
        {
            printf("\nMovie found\n");
            printf("name: %s\n", mdb[i].title);
            printf("director: %s\n", mdb[i].director);
            printf("release year: %d\n", mdb[i].year);
            printf("genre: %s\n", mdb[i].genre);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Movie not found!!");
    }
}
void update_movie_records(movie_DB *mdb, int n)
{
    char search[10];
    int found = 0;
    printf("Enter title to update movie records:");
    scanf(" %[^\n]", search);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(mdb[i].title, search) == 0)
        {
            printf("\nEnter new details:\n");
            printf("Enter tne movie title:");
            scanf(" %[^\n]", mdb[i].title);
            printf("Enter tne movie director:");
            scanf(" %[^\n]", mdb[i].director);
            printf("Enter tne movie release year:");
            scanf("%d", &mdb[i].year);
            printf("Enter tne movie genre:");
            scanf(" %[^\n]", mdb[i].genre);

            printf("Movie updated successfully\n");
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("Movie not found!!");
    }
}
