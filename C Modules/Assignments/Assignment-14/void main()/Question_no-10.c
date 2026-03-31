#include<stdio.h>
struct product {
    int id;
    char name[20];
    int quantity;
    int price;
};

void main(){
    struct product p[10];
    int n;
    printf("Enter no.of product :");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the product %d details\n",i+1);

        printf("Enter product id:");
        scanf("%d",&p[i].id);

        printf("Enter the product name:");
        scanf("%s",p[i].name);

        printf("Enter the product quantity:");
        scanf("%d",&p[i].quantity);

        printf("Enter the product price:");
        scanf("%d",&p[i].price);
    }

    printf("------DETAILS------");
    for (int i = 0; i < n; i++)
    {
         printf("------SALESMANGER DETAILS %d------",i+1);
        printf("\n1.product Id: %d",p[i].id);
        printf("\n2.product name: %s",p[i].name);
        printf("\n3.product quantity: %d\n",p[i].quantity);
        printf("\n4.product price : %d\n",p[i].price);
    }
}
