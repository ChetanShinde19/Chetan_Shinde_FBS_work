#include <stdio.h>
typedef struct
{
    int id;
    char name[10];
    int quantity;
    int price;
} product;

product store();
void display(product *a);

int main()
{
    product a1,a2;
    a1 = store();
    display(&a1);
    a2 = store();
    display(&a2);
    return 0;
}

product store()
{
    product a;
    printf("\nEnter the product details\n");

    printf("Enter product id:");
    scanf("%d", &a.id);

    printf("Enter the product name:");
    scanf(" %[^\n]", a.name);

    printf("Enter the product quantity:");
    scanf("%d", &a.quantity);

    printf("Enter the product price:");
    scanf("%d", &a.price);

    return a;
}

void display(product *a)
{
    printf("\n------product DETAILS------");
    printf("\nroduct Id: %d", a->id);
    printf("\nproduct name: %s", a->name);
    printf("\nproduct quantity: %d", a->quantity);
    printf("\nproduct price : %d\n", a->price);
}