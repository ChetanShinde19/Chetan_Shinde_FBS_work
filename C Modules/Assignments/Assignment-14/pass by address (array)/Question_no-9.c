#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int real;
    int imaginary;
} complex;

void store(complex *d, int n);
void display(complex *d, int n);
int main()
{

    int n;
    complex *d;
    printf("Enter the no.of complex numbers:");
    scanf("%d", &n);
    d = (complex *)malloc(n * sizeof(complex));
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

void store(complex *d, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Entre the real & imaginary-%d:", i + 1);
        scanf("%d %d", &d[i].real, &d[i].imaginary);
    }
}
void display(complex *d, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("complex=real + imaginary:\n %d+%di\n", d[i].real, d[i].imaginary);
    }
}
