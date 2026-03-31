#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int feet;
    int inch;
} distance;

void store(distance *d, int n);
void display(distance *d, int n);
int main()
{

    int n;
    distance *d;
    printf("Enter the no.of distance :");
    scanf("%d", &n);
    d = (distance *)malloc(n * sizeof(distance));
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

void store(distance *d, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Entre the (feet,inch)-%d:", i + 1);
        scanf("%d %d", &d[i].feet, &d[i].inch);
    }
}
void display(distance *d, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("feet: %d,\ninch: %d\n", d[i].feet, d[i].inch);
    }
}
