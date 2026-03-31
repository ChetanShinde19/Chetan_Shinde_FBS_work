#include<stdio.h>
struct distance {
    int feet;
    int inch;
    
};

void main(){

    struct distance d;
    printf("Entre the (feet inch)");
    scanf("%d %d",&d.feet,&d.inch);


    printf("feet: %d \n inch: %d",d.feet,d.inch);
}
