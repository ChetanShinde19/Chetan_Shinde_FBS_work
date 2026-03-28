#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000
typedef struct
{
    int id;
    char title[50];
    char artist[50];
    double duration;
} music_librarys;

music_librarys music[MAX];
int music_count = 0;

void add_songs();
void display();

int main()
{

    int choice=0;
    while (1)
    {
     
    
    printf("Enter the choice:\n");
    printf("1.Add new songs\n");
    printf("2.Display the song library:\n");
    scanf("%d", &choice);
    
    if (choice == 1)
    {

        add_songs();
    }
    if (choice == 2)
    {

        display();
    }
    else 
    {
        printf("Input Not Found!!\nEnter the Invalid input");
        
    }
}
    return 0;
}

void add_songs()
{
    int num;
    printf("Enter no.of songs to add in music library :");
        scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("enter the song id: ");
        scanf("%d", &music[music_count].id);

        printf("enter the song title:");
        scanf(" %[^\n]", music[music_count].title);

        printf("enter the song artist name:");
        scanf(" %[^\n]", music[music_count].artist);

        printf("enter the song duration:");
        scanf("%lf", &music[music_count].duration);
        music_count++;
        printf("song added!!\n");
    }
    printf("successfully added in music library\n");
}

void display()
{

    
    if (music_count==0)
    {
        printf("No songs has been stored in library");
    }
    
    for (int i = 0; i < music_count; i++)
    {
        printf("song Id : %d\n", music[i].id);
        printf("song title:%s\n", music[i].title);
        printf("song artist name:%s\n", music[i].artist);
        printf("song duration:%.2lf\n", music[i].duration);
    }
}
