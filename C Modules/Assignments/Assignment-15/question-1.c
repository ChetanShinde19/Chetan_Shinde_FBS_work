#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char book_name[100];
    int id;
    char author[100];
    int price;
} Book;


void user(Book *books,int n);
void display(Book *books,int n);

int main()
{
    int n;
    Book *books;
    printf("Enter the no.of books:");
    scanf("%d",&n);
    books=(Book *)malloc(n *sizeof(Book));
    if (books==NULL)
    {
        printf("Failed to allocate memory");
        return 0;
    }
    
    user(books,n);
    display(books,n);

    free(books);
    return 0;
}

void user(Book *books,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of book-%d:\n",i+1);
        printf("Enter the book name:");
        scanf(" %[^\n]",books[i].book_name);
        printf("Enter the book id:");
        scanf("%d",&books[i].id);
        printf("Enter the book author name:");
        scanf(" %[^\n]",books[i].author);
        printf("Enter the book price:");
        scanf("%d",&books[i].price);
    } 
}

void display(Book *books,int n)
{
    printf("--------book details--------\n");
    for (int i = 0; i < n; i++)
    {
        printf("-------Book-%d-------\n",i+1);
        printf("book name: %s\n",books[i].book_name);
        printf("book id: %d\n",books[i].id);
        printf("book author: %s\n",books[i].author);
        printf("book price: %d\n",books[i].price);
    }
    
}