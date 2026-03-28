#include <stdio.h>

int main() {
    int num,i;
    long series=0,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("series:");
    for (int i = 1; i < num; i++)
    {
        series=series *10+1;
        sum+=series;
    printf("%ld",series);
    if (i<num)
    {
        printf("+");
    }
}
    printf("series:\n%ld",sum);
    return 0;
}
