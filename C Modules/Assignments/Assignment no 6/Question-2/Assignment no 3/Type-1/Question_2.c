#include<stdio.h>
void table();
void table()
{
    int n;
    int i;
    int j;
    int table_range;
    printf("Enter table number:");
    scanf(" %d", &n);
    printf("Enter increment number:");
    scanf(" %d", &i);
    printf("Enter left number:");
    scanf(" %d", &j);
    printf("Enter table range number:");
    scanf(" %d", &table_range);
    while (i<=table_range)
    {
        printf(" %d * %d = %d \n",j,i,n*i,table_range);
        i++;
        /* code */
    }
    return 0;
}
int main()
{
    table();
    return 0;
}