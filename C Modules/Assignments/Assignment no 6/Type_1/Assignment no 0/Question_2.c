#include<stdio.h>
void area_circle();
int main()
{
   area_circle();
}
void area_circle(){
     int r=10;
    float pi=3.14;
    float area =pi*r*r;
    printf("Area of the circle %f is ",area);

}