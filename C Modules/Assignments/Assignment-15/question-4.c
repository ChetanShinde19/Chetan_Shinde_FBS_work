#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[100];
    int price;
    int quantity;
} salesystem;

void additems(salesystem *ss, int n);
void total_cost(salesystem *ss, int n);
void display(salesystem *ss, int n);

int main()
{
    int n;
    salesystem *ss;
    printf("Enter th no.of items do you want to add:");
    scanf("%d", &n);
    ss = (salesystem *)malloc(n * sizeof(salesystem));
    if (ss == NULL)
    {
        printf("FAILED TO ALLOCATE MEMORY!!");
        return 0;
    }

    additems(ss, n);
    display(ss, n);
    total_cost(ss, n);

    free(ss);
    return 0;
}

void additems(salesystem *ss, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("Enter details of product-%d:\n", i + 1);

        printf("Enter the product name:");
        scanf(" %[^\n]", ss[i].name);
        printf("Enter the product price:");
        scanf(" %d", &ss[i].price);
        printf("Enter the product quantity:");
        scanf(" %d", &ss[i].quantity);
    }
}

void total_cost(salesystem *ss, int n)
{
    int total_price = 0;
    printf("\n======TOTAL BILL======\n");
    for (int i = 0; i < n; i++)
    {
        int item_total = ss[i].price * ss[i].quantity;
        total_price = total_price + item_total;

        printf("%s -> %d x %d = %d\n",
               ss[i].name,
               ss[i].price,
               ss[i].quantity,
               item_total);
    }

    printf("\nTotal Cost = %d\n", total_price);
}
void display(salesystem *ss, int n)
{
    printf("======PRODUCT DETAILS======\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nProduct %d:\n", i + 1);
        printf("product name : %s\n", ss[i].name);
        printf("product price : %d\n", ss[i].price);
        printf("product quantity : %d\n", ss[i].quantity);
    }
}