#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int id;
    char name[50];
    int quantity;
    int price;
} product;

void store(product *d, int n);
void display(product *d, int n);
int main()
{

    int n;
    product *d;
    printf("Enter the no.of products:");
    scanf("%d", &n);
    d = (product *)malloc(n * sizeof(product));
    if (d == NULL)
    {
        printf("Failled to allocate memory!!");
        return 0;
    }

    store(d, n);
    display(d, n);
    free(d);
    return 0;
}

void store(product *d, int n)
{
    
    for (int i = 0; i < n; i++)
    {
        printf("enter the product details-%d\n",i+1);
        printf("Enter the product ID:");
        scanf("%d", &d[i].id);
        printf("Enter the product name:");
        scanf(" %[^\n]",d[i].name);
        printf("Enter the product quantity:");
        scanf("%d", &d[i].quantity);
        printf("Enter the product price:");
        scanf("%d", &d[i].price);
    }
}
void display(product *d, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("===========PRODUCT DETAIL===========\n");
        printf("product ID: %d\n",d[i].id);
        printf("product name: %s\n",d[i].name);
        printf("product quantity: %d\n",d[i].quantity);
        printf("product price: %d\n",d[i].price);
    }
}
