#include<stdio.h>
void area_triangle();
int main()
{
    area_triangle();
    return 0;
}
void area_triangle(){
    float height =10;
    float base=5;
    float area=(base*height)/2;
    printf("Area of the Triangle is %.2f",area);
}